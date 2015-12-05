#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
class cl3_f150repo_black: Car_F
{
	scope	= 2;
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class openmenu
		{
			displayName = "Open Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" < 0.01";
			statement = "this animate [""menuAnim"",1]";
		};
		class closemenu
		{
			displayName = "Close Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""menuAnim"",0]";
		};
		class repolower
		{
			displayName = "Lift Down";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim3"" < 0.01 && (speed this == 0)";
			statement = "[this, ""CL3_Lights"", 1, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", true, true] call cl3mod_fnc_set_Variable; this animate [""RepoAnim2"", 1]; this animate [""RepoAnim1"", 1]; this animate [""RepoAnim3"", 1]; [this, ""RepoSound""] call CBA_fnc_globalSay3d";
		};
		class reporaise
		{
			displayName = "Lift Up";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim3"" > 0.99 && (speed this == 0)";
			statement = "this animate [""RepoAnim3"", 0]; this animate [""RepoAnim1"", 0]; this animate [""RepoAnim2"", 0];[this, ""RepoSound""] call CBA_fnc_globalSay3d;[this, ""CL3_Lights"", 0, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", false, true] call cl3mod_fnc_set_Variable;[this, this, '', ['Repodrop', this]] execVM '\cl3_mod_client\functions\f\cl3mod_client_open\fn_Client_Open_Main.sqf';";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" < 0.01";
			statement = "this animate [""xmlHide"", 1];this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" > 0.99";
			statement = "this animate [""xmlHide"", 0];this animate [""xmlHoodHide"", 0]";
		};
		class opendoorrightfrontwindow
		{
			displayName = "Open Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""DoorRightFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorrightfrontwindow
		{
			displayName = "Close Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""DoorRightFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
		class opendoorleftfrontwindow
		{
			displayName = "Open Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""DoorLeftFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorleftfrontwindow
		{
			displayName = "Close Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""DoorLeftFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
	};
};
class cl3_f150repo_blue: Car_F
{
	scope	= 2;
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class openmenu
		{
			displayName = "Open Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" < 0.01";
			statement = "this animate [""menuAnim"",1]";
		};
		class closemenu
		{
			displayName = "Close Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""menuAnim"",0]";
		};
		class repolower
		{
			displayName = "Lift Down";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim2"" < 0.01 && (speed this < 10) && ((this getVariable ['CL3_Lights',0]) != 1)";
			statement = "[this, ""CL3_Lights"", 1, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", true, true] call cl3mod_fnc_set_Variable; this animate [""RepoAnim2"", 1]; this animate [""RepoAnim1"", 1]; this animate [""RepoAnim3"", 1]; [this, ""RepoSound""] call CBA_fnc_globalSay3d";
		};
		class reporaise
		{
			displayName = "Lift Up";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim3"" > 0.99 && (speed this < 10)";
			statement = "this animate [""RepoAnim3"", 0]; this animate [""RepoAnim1"", 0]; this animate [""RepoAnim2"", 0];[this, ""RepoSound""] call CBA_fnc_globalSay3d;[this, ""CL3_Lights"", 0, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", false, true] call cl3mod_fnc_set_Variable";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" < 0.01";
			statement = "this animate [""xmlHide"", 1];this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" > 0.99";
			statement = "this animate [""xmlHide"", 0];this animate [""xmlHoodHide"", 0]";
		};
		class opendoorrightfrontwindow
		{
			displayName = "Open Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorrightfrontwindow
		{
			displayName = "Close Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
		class opendoorleftfrontwindow
		{
			displayName = "Open Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorleftfrontwindow
		{
			displayName = "Close Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
	};
};
class cl3_f150repo_green: Car_F
{
	scope	= 2;
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class openmenu
		{
			displayName = "Open Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" < 0.01";
			statement = "this animate [""menuAnim"",1]";
		};
		class closemenu
		{
			displayName = "Close Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""menuAnim"",0]";
		};
		class repolower
		{
			displayName = "Lift Down";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim2"" < 0.01 && (speed this < 10) && ((this getVariable ['CL3_Lights',0]) != 1)";
			statement = "[this, ""CL3_Lights"", 1, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", true, true] call cl3mod_fnc_set_Variable; this animate [""RepoAnim2"", 1]; this animate [""RepoAnim1"", 1]; this animate [""RepoAnim3"", 1]; [this, ""RepoSound""] call CBA_fnc_globalSay3d";
		};
		class reporaise
		{
			displayName = "Lift Up";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim3"" > 0.99 && (speed this < 10)";
			statement = "this animate [""RepoAnim3"", 0]; this animate [""RepoAnim1"", 0]; this animate [""RepoAnim2"", 0];[this, ""RepoSound""] call CBA_fnc_globalSay3d;[this, ""CL3_Lights"", 0, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", false, true] call cl3mod_fnc_set_Variable";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" < 0.01";
			statement = "this animate [""xmlHide"", 1];this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" > 0.99";
			statement = "this animate [""xmlHide"", 0];this animate [""xmlHoodHide"", 0]";
		};
		class opendoorrightfrontwindow
		{
			displayName = "Open Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorrightfrontwindow
		{
			displayName = "Close Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
		class opendoorleftfrontwindow
		{
			displayName = "Open Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorleftfrontwindow
		{
			displayName = "Close Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
	};
};
class cl3_f150repo_orange: Car_F
{
	scope	= 2;
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class openmenu
		{
			displayName = "Open Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" < 0.01";
			statement = "this animate [""menuAnim"",1]";
		};
		class closemenu
		{
			displayName = "Close Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""menuAnim"",0]";
		};
		class repolower
		{
			displayName = "Lift Down";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim2"" < 0.01 && (speed this < 10) && ((this getVariable ['CL3_Lights',0]) != 1)";
			statement = "[this, ""CL3_Lights"", 1, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", true, true] call cl3mod_fnc_set_Variable; this animate [""RepoAnim2"", 1]; this animate [""RepoAnim1"", 1]; this animate [""RepoAnim3"", 1]; [this, ""RepoSound""] call CBA_fnc_globalSay3d";
		};
		class reporaise
		{
			displayName = "Lift Up";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim3"" > 0.99 && (speed this < 10)";
			statement = "this animate [""RepoAnim3"", 0]; this animate [""RepoAnim1"", 0]; this animate [""RepoAnim2"", 0];[this, ""RepoSound""] call CBA_fnc_globalSay3d;[this, ""CL3_Lights"", 0, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", false, true] call cl3mod_fnc_set_Variable";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" < 0.01";
			statement = "this animate [""xmlHide"", 1];this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" > 0.99";
			statement = "this animate [""xmlHide"", 0];this animate [""xmlHoodHide"", 0]";
		};
		class opendoorrightfrontwindow
		{
			displayName = "Open Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorrightfrontwindow
		{
			displayName = "Close Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
		class opendoorleftfrontwindow
		{
			displayName = "Open Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorleftfrontwindow
		{
			displayName = "Close Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
	};
};
class cl3_f150repo_red: Car_F
{
	scope	= 2;
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class openmenu
		{
			displayName = "Open Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" < 0.01";
			statement = "this animate [""menuAnim"",1]";
		};
		class closemenu
		{
			displayName = "Close Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""menuAnim"",0]";
		};
		class repolower
		{
			displayName = "Lift Down";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim2"" < 0.01 && (speed this < 10) && ((this getVariable ['CL3_Lights',0]) != 1)";
			statement = "[this, ""CL3_Lights"", 1, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", true, true] call cl3mod_fnc_set_Variable; this animate [""RepoAnim2"", 1]; this animate [""RepoAnim1"", 1]; this animate [""RepoAnim3"", 1]; [this, ""RepoSound""] call CBA_fnc_globalSay3d";
		};
		class reporaise
		{
			displayName = "Lift Up";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim3"" > 0.99 && (speed this < 10)";
			statement = "this animate [""RepoAnim3"", 0]; this animate [""RepoAnim1"", 0]; this animate [""RepoAnim2"", 0];[this, ""RepoSound""] call CBA_fnc_globalSay3d;[this, ""CL3_Lights"", 0, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", false, true] call cl3mod_fnc_set_Variable";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" < 0.01";
			statement = "this animate [""xmlHide"", 1];this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" > 0.99";
			statement = "this animate [""xmlHide"", 0];this animate [""xmlHoodHide"", 0]";
		};
		class opendoorrightfrontwindow
		{
			displayName = "Open Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorrightfrontwindow
		{
			displayName = "Close Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
		class opendoorleftfrontwindow
		{
			displayName = "Open Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorleftfrontwindow
		{
			displayName = "Close Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
	};
};
class cl3_f150repo_gray: Car_F
{
	scope	= 2;
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class openmenu
		{
			displayName = "Open Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" < 0.01";
			statement = "this animate [""menuAnim"",1]";
		};
		class closemenu
		{
			displayName = "Close Menu";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""menuAnim"" > 0.99";
			statement = "this animate [""menuAnim"",0]";
		};
		class repolower
		{
			displayName = "Lift Down";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim2"" < 0.01 && (speed this < 10) && ((this getVariable ['CL3_Lights',0]) != 1)";
			statement = "[this, ""CL3_Lights"", 1, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", true, true] call cl3mod_fnc_set_Variable; this animate [""RepoAnim2"", 1]; this animate [""RepoAnim1"", 1]; this animate [""RepoAnim3"", 1]; [this, ""RepoSound""] call CBA_fnc_globalSay3d";
		};
		class reporaise
		{
			displayName = "Lift Up";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "assignedDriver this == player && alive this && this animationPhase ""RepoAnim3"" > 0.99 && (speed this < 10)";
			statement = "this animate [""RepoAnim3"", 0]; this animate [""RepoAnim1"", 0]; this animate [""RepoAnim2"", 0];[this, ""RepoSound""] call CBA_fnc_globalSay3d;[this, ""CL3_Lights"", 0, true] call cl3mod_fnc_set_Variable;[this, ""CL3_Lights_var1"", false, true] call cl3mod_fnc_set_Variable";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" < 0.01";
			statement = "this animate [""xmlHide"", 1];this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHide"" > 0.99";
			statement = "this animate [""xmlHide"", 0];this animate [""xmlHoodHide"", 0]";
		};
		class opendoorrightfrontwindow
		{
			displayName = "Open Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorrightfrontwindow
		{
			displayName = "Close Right Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorRightFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorRightFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
		class opendoorleftfrontwindow
		{
			displayName = "Open Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" < 0.01 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 1]; [this, ""WindowOpenSound""] call CBA_fnc_globalSay3d";
		};
		class closedoorleftfrontwindow
		{
			displayName = "Close Left Front Window";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""DoorLeftFrontWAnim"" > 0.99 && this animationPhase ""menuAnim"" > 0.99 && (speed this < 10)";
			statement = "this animate [""DoorLeftFrontWAnim"", 0]; [this, ""WindowCloseSound""] call CBA_fnc_globalSay3d";
		};
	};
};