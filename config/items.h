#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
class cl_Alcohol_base: Items_base_F
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class ArMaTeC_FootballCore: ThingX
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class ArMaTeC_FootballFull: ArMaTeC_FootballCore
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl_object_base: ThingX
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl_money: cl_object_base
{
	class UserActions
	{
		class menuaction
		{
			displayName = "$STR_TakeItem";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'collected';_c = this getVariable 'cash'; !isNil '_c' && isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'']execVM ""\cl3_actions\action.sqf""";
		};
	};
};
class cl3_fishing_bite: Strategic
{
	class UserActions
	{
		class menuaction
		{
			displayName = "Strike";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_c = this getVariable ['CL3_FishOn',false]; !isNil '_c' and _c and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this, ""CL3_FishOn"", false, true] call cl3mod_fnc_set_Variable;[this,'fishStrike']execVM ""\cl3_actions\action.sqf""";
		};
		class menuaction1
		{
			displayName = "Take rod";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "!CL3MOD_ActionLock and player distance this < 5";
			statement = "this call CL3MOD_fnc_Fishing_RodTake";
		};
	};
};
class cl3_fishing_bitefloat: Strategic
{
	class UserActions
	{
		class menuaction
		{
			displayName = "Strike";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_c = this getVariable ['CL3_FishOn',false]; !isNil '_c' and _c and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this, ""CL3_FishOn"", false, true] call cl3mod_fnc_set_Variable;[this,'fishStrike']execVM ""\cl3_actions\action.sqf""";
		};
		class menuaction1
		{
			displayName = "Take rod";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "!CL3MOD_ActionLock and player distance this < 5";
			statement = "this call CL3MOD_fnc_Fishing_RodTake";
		};
	};
};
class cl3_cashcase: cl_object_base
{
	class UserActions
	{
		class menuaction
		{
			displayName = "$STR_TakeItem";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'collected';_c = this getVariable 'cash'; !isNil '_c' && isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'']execVM ""\cl3_actions\action.sqf""";
		};
	};
};
class cl_evidencebox: Strategic
{
	class UserActions
	{
		class menuaction
		{
			displayName = "Collect evidence";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'CollectEvidence']execVM ""\cl3_actions\action.sqf""";
		};
		class menuaction1
		{
			displayName = "Remove evidence";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'RemoveEvidence']execVM ""\cl3_actions\action.sqf""";
		};			
	};
};
class cl_food_base: ThingX
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class SatPhone: ThingX
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class Fuel_can: ThingX
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
}; 
class cl_dvdcase: ThingX
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
}; 
class CL_Drugscannabis1: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};	
class cl3_beartrap_item: mikes_items_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_beartrap: mikes_items_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		class menuaction1
		{
			displayName = "Poke with stick";
			position = CL3_ActionPositionPoint;
			radius = CL3_ActionPositionRange;
			onlyforplayer = 0;
			condition = "!CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'beartrappoke'] execVM ""\cl3_actions\action.sqf""";
		};
	};
};
class cl3_bankid: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_chopper_rotor: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_chopper_tailrotor: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_chopper_fueltank2: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_chopper_avionics: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_car_fueltank: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_car_window: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_car_wheel: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_car_hood: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_car_body: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class cl3_Repair_engine: cl_object_base
{
#define CL3_ActionPositionPoint "driver"
#define CL3_ActionPositionRange 14.5
#include <items_include.h>
};
class CL_Drugscannabis2: cl_object_base
{
	class UserActions
	{
		class menuaction
		{
			displayName = "$STR_HarvestWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; _t = this getVariable 'cl3_done';isNil '_w' and !isNil '_t' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this]execVM ""\cl3_actions\action.sqf""";
		};
		class menuaction1
		{
			displayName = "$STR_DestroyWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'killweed']execVM ""\cl3_actions\action.sqf""";
		};			
	};
};

class cl_coca_plant: cl_object_base
{
	class UserActions
	{
		class menuaction
		{
			displayName = "$STR_HarvestWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; _t = this getVariable 'cl3_done';isNil '_w' and !isNil '_t' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this]execVM ""\cl3_actions\action.sqf""";
		};
		class menuaction1
		{
			displayName = "$STR_DestroyWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'killweed']execVM ""\cl3_actions\action.sqf""";
		};			
	};
};

class cl_mushroom_plant: cl_object_base
{
	class UserActions
	{
		class menuaction
		{
			displayName = "$STR_HarvestWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; _t = this getVariable 'cl3_done';isNil '_w' and !isNil '_t' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this]execVM ""\cl3_actions\action.sqf""";
		};
		class menuaction1
		{
			displayName = "$STR_DestroyWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'killweed']execVM ""\cl3_actions\action.sqf""";
		};			
	};
};
class cl_b_PinusM1s_EP1: cl_object_base
{
	class UserActions
	{
		class menuaction
		{
			displayName = "$STR_HarvestWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; _t = this getVariable 'cl3_done';isNil '_w' and !isNil '_t' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this]execVM ""\cl3_actions\action.sqf""";
		};
		class menuaction1
		{
			displayName = "$STR_DestroyWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'killweed']execVM ""\cl3_actions\action.sqf""";
		};			
	};
};
class cl_p_papaver_EP1: cl_object_base
{
	class UserActions
	{
		class menuaction
		{
			displayName = "$STR_HarvestWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; _t = this getVariable 'cl3_done';isNil '_w' and !isNil '_t' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this]execVM ""\cl3_actions\action.sqf""";
		};
		class menuaction1
		{
			displayName = "$STR_DestroyWeed";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'hunted'; isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'killweed']execVM ""\cl3_actions\action.sqf""";
		};			
	};
};
class cl_car_keys: cl_object_base
{
	class UserActions
	{
		class menuaction1
		{
			displayName = "$STR_TakeCarKeys";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'collected';_c = this getVariable 'car'; !isNil '_c' && isNil '_w' and !CL3MOD_ActionLock and player distance this < 5";
			statement = "[this,'carkey']execVM ""\cl3_actions\action.sqf""";
		};			
	};
};

class cl3_drillrig: cl_object_base
{
	class UserActions
	{
		class menuaction1
		{
			displayName = "Restart Drill";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'BR_paused'; !isNil '_w' && _w && !CL3MOD_ActionLock and player distance this < 5";
			statement = "this setVariable [""BR_paused"",false,true];";
		};
		class menuaction2
		{
			displayName = "Check status";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'BR_load'; !isNil '_w' && _w > 0 && !CL3MOD_ActionLock and player distance this < 5";
			statement = "systemChat format['Drill load %1/100',this getVariable 'BR_load']";
		};
	};
};

class cl3_DrillRig25: cl_object_base
{
	class UserActions
	{
		class menuaction1
		{
			displayName = "Restart Drill";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'BR_paused'; !isNil '_w' && _w && !CL3MOD_ActionLock and player distance this < 5";
			statement = "this setVariable [""BR_paused"",false,true];";
		};
		class menuaction2
		{
			displayName = "Check status";
			position = "driver";
			radius = 2.5;
			onlyforplayer = 0;
			condition = "_w = this getVariable 'BR_load'; !isNil '_w' && _w > 0 && !CL3MOD_ActionLock and player distance this < 5";
			statement = "systemChat format['Drill load %1/100',this getVariable 'BR_load']";
		};
	};
};