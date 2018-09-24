local Respones = {
	OK = 1,
	
	SystemErr = -100,
	UserIsFreeze = -101,
	UserIsNotGuest = -102,	--不是游客
	InvalidParams = -103,
	UnameIsExist = -104,	-- 名字已经被占用
}

return Respones