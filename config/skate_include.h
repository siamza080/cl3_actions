
class CLPD_Remote_control_OPEN
{
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\pdremote.paa' size='1' shadow=2 /> PD Remote Open";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyforplayer = 1;
	condition = "player == assignedDriver this && alive this && !pdremoteSwitch && !CL3MOD_ActionLock && CL3MOD_UnitRole in ['COP','EMT'] && (player in (crew this))";
	statement = "pdremoteSwitch = true;";
};
class CLPD_Remote_control_OPEN_G1
{
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\pdremotegateup.paa' size='1' shadow=2 /> Open PD 1";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyforplayer = 1;
	condition = "clpdHQLower animationPhase 'animategate1' < 0.1 && player == assignedDriver this && alive this && pdremoteSwitch && !CL3MOD_ActionLock && CL3MOD_UnitRole in ['COP','EMT'] && (player in (crew this))";
	statement = "[player,player,'',['pdremoteSwitch1',player]] execVM '\cl3_mod_client\functions\f\cl3mod_client_open\fn_Client_Open_Main.sqf';";
};
class CLPD_Remote_control_CLOSE_G1
{
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\pdremotegatedown.paa' size='1' shadow=2 /> Close PD 1";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyforplayer = 1;
	condition = "clpdHQLower animationPhase 'animategate1' >= 0.9 && player == assignedDriver this && alive this && pdremoteSwitch && !CL3MOD_ActionLock && CL3MOD_UnitRole in ['COP','EMT'] && (player in (crew this))";
	statement = "[player,player,'',['pdremoteSwitch1',player]] execVM '\cl3_mod_client\functions\f\cl3mod_client_open\fn_Client_Open_Main.sqf';";
};
class CLPD_Remote_control_OPEN_G2
{
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\pdremotegateup.paa' size='1' shadow=2 /> Open PD 2";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyforplayer = 1;
	condition = "clpdHQLower animationPhase 'animategate2' < 0.1 && player == assignedDriver this && alive this && pdremoteSwitch && !CL3MOD_ActionLock && CL3MOD_UnitRole in ['COP','EMT'] && (player in (crew this))";
	statement = "[player,player,'',['pdremoteSwitch2',player]] execVM '\cl3_mod_client\functions\f\cl3mod_client_open\fn_Client_Open_Main.sqf';";
};
class CLPD_Remote_control_CLOSE_G2
{
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\pdremotegatedown.paa' size='1' shadow=2 /> Close PD 2";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyforplayer = 1;
	condition = "clpdHQLower animationPhase 'animategate2' >= 0.9 && player == assignedDriver this && alive this && pdremoteSwitch && !CL3MOD_ActionLock && CL3MOD_UnitRole in ['COP','EMT'] && (player in (crew this))";
	statement = "[player,player,'',['pdremoteSwitch2',player]] execVM '\cl3_mod_client\functions\f\cl3mod_client_open\fn_Client_Open_Main.sqf';";
};
class CLPD_Remote_control_Reset
{
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\pdremotereset.paa' size='1' shadow=2 /> PD Remote Reset";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyforplayer = 1;
	condition = "player == assignedDriver this && alive this && pdremoteSwitch && !CL3MOD_ActionLock && CL3MOD_UnitRole in ['COP','EMT'] && (player in (crew this))";
	statement = "clpdHQLower animate ['animategate1',0];clpdHQLower animate ['animategate2',0];";
};
class CLPD_Remote_control_CLOSE
{
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\pdremoteclose.paa' size='1' shadow=2 /> PD Remote Close";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyforplayer = 1;
	condition = "player == assignedDriver this && alive this && pdremoteSwitch && !CL3MOD_ActionLock && CL3MOD_UnitRole in ['COP','EMT'] && (player in (crew this))";
	statement = "pdremoteSwitch = false;";
};
class VehicleRepairSystem
{
	//displayNameDefault = "<img image='\cl3_images\cl3_menu\repair64.paa' size='2.5' />";
	//displayName = "Vehicle Repair System";
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\repair64.paa' size='1' shadow=2 /> Vehicle Repair System";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100011;
	onlyforplayer = 1;
	condition = "_w = this getVariable 'VehicleOwner';!(isNil '_w') and (player distance this < 5) and !CL3MOD_ActionLock and (alive this) and !(player in (crew this))";
	statement = "this spawn CL3MOD_VehicleRepairSystem_VehicleRepairSystem";
};
class loadbikeinvehicle
{

	displayName = "UnLoad from vehicle";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100010;
	onlyforplayer = 1;
	condition = "!CL3MOD_ActionLock and (alive this) and !(player in (crew this)) and (this getVariable 'bikeloaded' == 2);";
	statement = "[this,'unloadbike']execVM ""\cl3_actions\action.sqf""";
};
class cardead
{
	displayName = "Info";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100009;
	onlyforplayer = 0;
	condition = "_w = this getVariable 'VehicleOwner';!(_w == '') and (player distance this < 15) and !CL3MOD_ActionLock and !alive this";
	statement = "[this,'info']execVM ""\cl3_actions\action.sqf""";
};
class jumpout
{
	//displayName = "$STR_Vehicle_LockAction";
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\jumpout_ca.paa' size='1' shadow=2 />Jump out";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100008;
	onlyforplayer = 0;
	condition = "(player in (crew this)) && ((locked this) == 2) && (player distance this < 15) && !CL3MOD_ActionLock and alive this";
	statement = "[this,'jumpout']execVM ""\cl3_actions\action.sqf""";
};
class carlockaction
{
	//displayName = "$STR_Vehicle_LockAction";
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\key64_Green.paa' size='1' shadow=2 /> Use vehicle key (Unlock)";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100008;
	onlyforplayer = 0;
	condition = "_w = this getVariable 'VehicleOwner';(_w == player call cl3mod_fnc_getnamesafe) and (player distance this < 15) and !CL3MOD_ActionLock and alive this && (locked this) != 1";
	statement = "[this,'lock']execVM ""\cl3_actions\action.sqf""";
};
class carlockaction2
{
	//displayName = "$STR_Vehicle_LockAction";
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\key64_red.paa' size='1' shadow=2 /> Use vehicle key (Lock)";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100008;
	onlyforplayer = 0;
	condition = "_w = this getVariable 'VehicleOwner';(_w == player call cl3mod_fnc_getnamesafe) and (player distance this < 15) and !CL3MOD_ActionLock and alive this && (locked this) == 1";
	statement = "[this,'lock']execVM ""\cl3_actions\action.sqf""";
};
class carmenuaction
{
	//displayName = "$STR_VehMenu";
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\CarMenu64.paa' size='1' shadow=2 /> Vehicle Menu";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100007;
	onlyforplayer = 0;
	condition = "_w = this getVariable 'VehicleOwner';!isNil '_w' and (player distance this < 15) and !CL3MOD_ActionLock and alive this";
	statement = "[this,'vehiclemenu']execVM ""\cl3_actions\action.sqf""";
};
class menuaction
{
	//displayName = "$STR_UserInvAction";
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\menu64.paa' size='1' shadow=2 /> Menu";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100006;
	onlyforplayer = 0;
	condition = "alive (player) && player in crew this";
	statement = "[this,'menu']execVM ""\cl3_actions\action.sqf""";
};
class carradiooffaction
{
	displayName = "$STR_CarRadiooff";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100005;
	onlyforplayer = 0;
	condition = "CL3MOD_RadioActive and !CL3MOD_ActionLock and (player in (crew this)) and (this getVariable 'RadioSwitch' == 1);";
	statement = "[this,'radio_off']execVM ""\cl3_actions\action.sqf""";
};
class carradioonaction
{
	displayName = "$STR_CarRadio";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100004;
	onlyforplayer = 0;
	condition = "CL3MOD_RadioActive and !CL3MOD_ActionLock and (player in (crew this)) and (this getVariable 'RadioSwitch' == 0);";
	statement = "[this,'radio_on']execVM ""\cl3_actions\action.sqf""";
};
class carsearchforbomb
{
	displayNameDefault = "";
	displayName = "<img image='\cl3_images\cl3_menu\searchbomb64_ca.paa' size='1' shadow=2 /> Search for bombs bikes";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100003;
	onlyforplayer = 1;
	condition = "_w = this getVariable 'VehicleOwner';!isNil '_w' and !(_w == 'AiBusSystem') and  !CL3MOD_ActionLock and (player distance this < 5) and (alive this) and !(player in (crew this))";
	statement = "[this,'CarSearchbomb']execVM ""\cl3_actions\action.sqf""";
};
class BikePickup
{
	displayNameDefault = "";
	displayName = "Pick up";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100002;
	onlyforplayer = 1;
	condition = "_w = this getVariable 'VehicleOwner';!isNil '_w' and !(_w == 'AiBusSystem') and !CL3MOD_ActionLock and (player distance this < 5) and (alive this) and !(player in (crew this))";
	statement = "[this] execVM '\cl3_mbikes\push\SCRIPTS\pickup.sqf'";
};
class BikeJump
{
	displayNameDefault = "";
	displayName = "Jump";
	position = CL3_ActionPositionPoint;
	radius = CL3_ActionPositionRange;
	priority = 100002;
	onlyforplayer = 1;
	condition = "_w = this getVariable 'VehicleOwner';!isNil '_w' and !(_w == 'AiBusSystem') and !CL3MOD_ActionLock and (player distance this < 5) and (alive this) and (player in (crew this))";
	statement = "[this] execVM '\cl3_wheeled\cl_skate\scripts\olly.sqf'";
};