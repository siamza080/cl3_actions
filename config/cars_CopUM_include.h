class EnableLightbar
{
	displayName = "Lightbar On";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyForPlayer = 1;
	condition = "assignedDriver this == player && alive this &&  ((this getVariable ['CL3_Lights',0]) != 1)";
	statement = "[this, ""CL3_Lights"", 1, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", true, true] call cl3mod_fnc_set_Variable;this animate ['lightsAnim', 0]; this animate ['TopLightAnim', 0]";
};

class DisableLightbar
{
	displayName = "Lightbar Off";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyForPlayer = 1;
	condition = "assignedDriver this == player && alive this && ((this getVariable ['CL3_Lights',0]) != 0)";
	statement = "[this, ""CL3_Lights"", 0, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", false, true] call cl3mod_fnc_set_Variable;this animate ['lightsAnim', 1]; this animate ['TopLightAnim', 1]";
};
class EnableSiren
{
	displayName = "Siren On";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100012;
	onlyForPlayer = 1;
	condition = "assignedDriver this == player && alive this && ((this getVariable ['CL3_Siren',0]) != 1)";
	statement = "[this, ""CL3_Siren"", 1, true] call cl3mod_fnc_set_Variable";
};
class DisableSiren
{
	displayName = "Siren Off";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100012;
	onlyForPlayer = 1;
	condition = "assignedDriver this == player && alive this && ((this getVariable ['CL3_Siren',0]) != 0)";
	statement = "[this, ""CL3_Siren"", 0, true] call cl3mod_fnc_set_Variable";
};