print("hello world!!!")

log_debug("hello world!!!")


-- function PrintTable( tbl , level, filteDefault)
--   local msg = ""
--   filteDefault = filteDefault or true --默认过滤关键字（DeleteMe, _class_type）
--   level = level or 1
--   local indent_str = ""
--   for i = 1, level do
--     indent_str = indent_str.."  "
--   end

--   print(indent_str .. "{")
--   for k,v in pairs(tbl) do
--     if filteDefault then
--       if k ~= "_class_type" and k ~= "DeleteMe" then
--         local item_str = string.format("%s%s = %s", indent_str .. " ",tostring(k), tostring(v))
--         print(item_str)
--         if type(v) == "table" then
--           PrintTable(v, level + 1)
--         end
--       end
--     else
--       local item_str = string.format("%s%s = %s", indent_str .. " ",tostring(k), tostring(v))
--       print(item_str)
--       if type(v) == "table" then
--         PrintTable(v, level + 1)
--       end
--     end
--   end
--   print(indent_str .. "}")
-- end

key = ""
function PrintTable(table , level)
  level = level or 1
  local indent = ""
  for i = 1, level do
    indent = indent.."  "
  end

  if key ~= "" then
    print(indent..key.." ".."=".." ".."{")
  else
    print(indent .. "{")
  end

  key = ""
  for k,v in pairs(table) do
     if type(v) == "table" then
        key = k
        PrintTable(v, level + 1)
     else
        local content = string.format("%s%s = %s", indent .. "  ",tostring(k), tostring(v))
      print(content)  
      end
  end
  print(indent .. "}")

end

mysql_wrapper.connect("127.0.0.1",3306,"kbe","root","root",function(err,context)
	if err then
		print(err)
		return 
	end

	mysql_wrapper.query(context, "select * from kbe_accountinfos", function(err,ret)
		if err then
			print(err)
			return 
		end

		print("success")
		PrintTable(ret)
	end)
end)

redis_wrapper.connect("127.0.0.1",6379,function(err,context)
	if (err) then
		print(err)
		return
	end

	print("redis connect success")

	-- redis_wrapper.close_redis(context)
	
	redis_wrapper.query(context,"hmset 001002  name \"black\" age \"35\" ",function(err ,result)
		if err then
			print(err)
			return
		end

		print(result)
	end)
	

	redis_wrapper.query(context,"hgetall 001002",function(err,result)
		if err then
			print(err)
			return 
		end

		PrintTable(result)

	end)

end)


local my_service = {
	on_session_recv_cmd = function(session,msg)

	end,
	on_session_disconnect = function(session)
		-- body
	end
}

local ret = service_wrapper.register(100,my_service)
print(ret)