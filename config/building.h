#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
class ArMaT_predgdt
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		class powerOn
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "$STR_DN_OUT_O_DOOR";
			position = "Door_1_trigger";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "((this animationPhase 'Door_1_rot') < 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) != 1)";
			statement = "([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] execVM ""\A3\Structures_F\scripts\Door_open.sqf"")";
		};
		class powerOff: powerOn
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "$STR_DN_OUT_C_DOOR";
			priority = 0.2;
			condition = "((this animationPhase 'Door_1_rot') >= 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) != 1)";
			statement = "([this, 'Door_1_rot', 'Door_Handle_1_rot_1', 'Door_Handle_1_rot_2'] execVM ""\A3\Structures_F\scripts\Door_close.sqf"")";
		};
	};
};
class ArMaT_predsat
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		class powerOn
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "$STR_DN_OUT_O_DOOR";
			position = "Door_1_trigger";
			priority = 0.4;
			radius = 1.5;
			onlyForPlayer = 0;
			condition = "!(this getVariable ['ATCRadarPower',true])";
			statement = "[this, ""ATCRadarPower"", true, true] call cl3mod_fnc_set_Variable";
		};
		class powerOff: powerOn
		{
			displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
			displayName = "$STR_DN_OUT_C_DOOR";
			priority = 0.2;
			condition = "this getVariable ['ATCRadarPower',true]";
			statement = "[this, ""ATCRadarPower"", false, true] call cl3mod_fnc_set_Variable";
		};
	};
};
/*
class Land_u_Addon_02_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Barracks_V2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Cargo_House_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Addon_02_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Slum_House03_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Small_01_V2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};
class Land_cargo_house_slum_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Slum_House02_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Stone_HouseSmall_V2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Small_02_V3_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_u_House_Small_02_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Stone_HouseBig_V2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Small_01_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Stone_HouseBig_V3_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Stone_HouseSmall_V3_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Slum_House01_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Small_02_V2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_d_Stone_HouseSmall_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Small_01_V3_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Big_02_V3_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_d_House_Small_01_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_u_House_Big_02_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Addon_03mid_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Big_02_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Big_01_V3_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_d_House_Big_02_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Big_02_V2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_d_House_Small_02_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Big_01_V2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Small_02_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_d_House_Big_01_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_u_House_Small_01_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_u_House_Big_01_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Cargo_House_V2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Stone_HouseBig_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Cargo_HQ_V3_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Cargo_House_V3_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Big_01_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Stone_HouseSmall_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_d_Stone_HouseBig_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Windmill01_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_d_Windmill01_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Church_01_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_House_Small_03_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_u_Barracks_V2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Factory_Main_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Cargo_Patrol_V3_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Factory_Conv1_Main_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Factory_Conv1_10_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Factory_Conv2_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_Lighthouse_small_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_IndPipe2_big_18ladder_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};
class Land_LightHouse_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};
class Land_Radar_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Barracks_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};

class Land_i_Stone_Shed_V1_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <building_include.h>
};
*/
class cl3_house_action
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 5
#include <building_include_houseAction.h>
};