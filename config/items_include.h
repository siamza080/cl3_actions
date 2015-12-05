class UserActions
{
	class menuaction
	{
		displayName = "$STR_TakeItem";
		position = CL3_ActionPositionPoint;
		radius = CL3_ActionPositionRange;
		onlyforplayer = 0;
		condition = "_w = this getVariable 'collected';_c = this getVariable 'count'; !isNil '_c' && isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
		statement = "[this,'item']execVM ""\cl3_actions\action.sqf""";
	};
};