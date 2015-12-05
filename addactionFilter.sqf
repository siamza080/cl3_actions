private ["_vars"];
_vars = _this select 3;
if((typeName _vars) == "ARRAY")then
{
	_vars execVM "\cl3_actions\action.sqf";
}else{
	[_vars] execVM "\cl3_actions\action.sqf";
};