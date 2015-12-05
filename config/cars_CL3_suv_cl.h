#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
class cl3_suv: Car_F
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		#include "cars_default_include.h"
	};
};
class cl3_suv_black: Car_F
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		#include "cars_default_include.h"
	};
};
class cl3_suv_taxi: Car_F
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 14.5
	class UserActions
	{
		#include "cars_default_include.h"
	};
};
