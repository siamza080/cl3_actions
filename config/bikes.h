#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
class Bicycle_F;
class cl3_bike_bmx: Bicycle_F
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		#include <bikes_include.h>
	};
};
class cl3_bike_mountain: Bicycle_F
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		#include <bikes_include.h>
	};
};
class cl3_bike_road: Bicycle_F
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		#include <bikes_include.h>
	};
};
class cl_skate_base: Bicycle_F
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		#include <skate_include.h>
	};
};
