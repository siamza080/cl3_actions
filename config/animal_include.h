class UserActions
{
	class collectaction
	{
		displayName = "Take meat";
		position = CL3_ActionPositionPoint;
		radius = CL3_ActionPositionRange;
		onlyforplayer = 0;
		condition = "_w = this getVariable 'hunted'; isNil '_w' && !CL3MOD_ActionLock && !alive this";
		statement = "[this]execVM ""\cl3_actions\action.sqf""";
	};
};