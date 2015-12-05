#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange

class cl3_etu_ifrit: O_MRAP_02_hmg_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
	};
};
class cl3_dodge_charger_patrol: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_patrol2: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_cn: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_etu: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_k9: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_traffic: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_emt: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_emtcg: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_emtfd: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_emtmr: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_emtpa: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_black: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_black: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_black: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_blue: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_blue: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_blue: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_camo: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_camo: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_camo: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_camourban: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_camourban: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_camourban: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_darkgreen: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_darkgreen: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_darkgreen: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_darkred: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_darkred: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_darkred: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_green: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_green: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_green: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_grey: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_grey: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_grey: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_lime: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_lime: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_lime: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_orange: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_orange: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_orange: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_pink: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_pink: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_pink: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_purple: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_purple: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_purple: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_red: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_red: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_red: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_white: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_white: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_white: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_s_yellow: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_o_yellow: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_chargerum_f_yellow: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "cars_CopUM_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};


class cl3_dodge_charger_s_black: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_black: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_black: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_blue: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_blue: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_blue: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_camo: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_camo: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_camo: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_camourban: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_camourban: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_camourban: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_darkgreen: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_darkgreen: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_darkgreen: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_darkred: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_darkred: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_darkred: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_green: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_green: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_green: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_grey: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_grey: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_grey: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_lime: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_lime: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_lime: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_orange: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_orange: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_orange: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_pink: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_pink: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_pink: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_purple: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_purple: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_purple: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_red: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_red: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_red: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_white: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_white: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_white: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_s_yellow: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_o_yellow: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};
class cl3_dodge_charger_f_yellow: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		class Switch1
		{
			displayName = "Enable Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""NVGHide"" > 0.99";
			statement = "this animate [""ThermalHide"",1];this animate [""NVGHide"",0]";
		};
		class Switch2
		{
			displayName = "Enable Thermal Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && this animationPhase ""ThermalHide"" > 0.99";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",0]";
		};
		class Switch3
		{
			displayName = "Disable Thermal/Night Vision";
			position = "action";
			radius = 1;
			onlyforplayer = 1;
			condition = "driver this == player && alive this && (this animationPhase ""ThermalHide"" < 0.01 OR this animationPhase ""NVGHide"" < 0.01)";
			statement = "this animate [""NVGHide"",1];this animate [""ThermalHide"",1]";
		};
		class hidexml
		{
			displayName = "Hide XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" < 0.01";
			statement = "this animate [""xmlHoodHide"", 1]";
		}; 
		class showxml
		{
			displayName = "Show XML";
			position = "action";
			radius = 1;
			onlyforplayer = 0;
			condition = "driver this == player && alive this && this animationPhase ""xmlHoodHide"" > 0.99";
			statement = "this animate [""xmlHoodHide"", 0]";
		};
		//Add more actions
	};
	//Add set_texture
};