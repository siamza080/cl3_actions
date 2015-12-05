#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
class Car;
class Car_F: Car
{
	class HitPoints /// we want to use hitpoints predefined for all cars
	{
		class HitLFWheel;
		class HitLF2Wheel;

		class HitRFWheel;
		class HitRF2Wheel;
		class HitBody;

		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
	};	
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		//Add more actions
	};
	//Add set_texture
};
class cl3_arielatom: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		//Add more actions
	};
	//Add set_texture
};
class cl3_arielatom_race: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		//Add more actions
	};
	//Add set_texture
};
class cl3_reventon: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		//Add more actions
	};
	//Add set_texture
};
class cl3_reventon_clpd : cl3_reventon
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		//Add more actions
	};
	//Add set_texture
};
class clpd_mondeo: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		//Add more actions
	};
	//Add set_texture
};
class clpd_mondeo_patrol : clpd_mondeo
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsCop_include.h"
		//Add more actions
	};
	//Add set_texture
};

class clpd_mondeo_Coastguard : clpd_mondeo
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsEMT_include.h"
		//Add more actions
	};
	//Add set_texture
};
class clpd_mondeo_FireDepartment : clpd_mondeo
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsEMT_include.h"
		//Add more actions
	};
	//Add set_texture
};
class clpd_mondeo_MountainRescue : clpd_mondeo
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsEMT_include.h"
		//Add more actions
	};
	//Add set_texture
};
class clpd_mondeo_Paramedic : clpd_mondeo
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "cars_default_include.h"
		#include "carsEMT_include.h"
		//Add more actions
	};
	//Add set_texture
};
class cl3_xr_1000: Car_F
{
	#define CL3_ActionPositionPoint "drivewheel_axis"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		#include <cars_default_include.h>
	};
};
#include "cars_f150repo_cl.h"
#include "cars_cl3_dodge_charger.h"
#include "cars_CL3_bus_cl.h"
#include "cars_CL3_suv_cl.h"
#include "cars_CL3_defender_110_cl.h"
#include "cars_cl3_range_rover_cl.h"
#include "cars_cl3_q7_cl.h"
#include "cars_cl3_transit_cl.h"
#include "cars_karts.h"