if(isNil "CL3MOD_LocalPlayerName")then{waitUntil{!(isNil "CL3MOD_LocalPlayerName")};};
if(CL3MOD_LocalPlayerName in CL3MOD_Client_Admins)then{[vehicle player] spawn CL3MOD_GIFTDROP;};