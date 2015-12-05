try
{
	[_this select 0, player] call cl3mod_client_Eject_No_Chute;
	player moveInDriver (_this select 0);
	sleep 0.5;
	player moveInDriver (_this select 0);
	//systemChat format ["Moved to %1",(_this select 0)];
}catch{
	diag_log format["actions_action.sqf Error:%1",_this];
};