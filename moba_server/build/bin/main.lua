print("hello world!!!")

log_debug("hello world!!!")

local a = 1
a[1] = 2

-- mysql_wrapper.connect("127.0.0.1",3306,"class_sql","root","123456",function(err,context)
-- 	if err then
-- 		print(err)
-- 		return 
-- 	end

-- 	mysql_wrapper.query(context, "select * from user", function(err,ret)
-- 		if err then
-- 			print(err)
-- 			return 
-- 		end

-- 		print("success")
-- 		print(ret)
-- 	end)
-- end)