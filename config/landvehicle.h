#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
class LandVehicle: Land
{
	#define CL3_ActionPositionPoint "driver"
	#define CL3_ActionPositionRange 4.5
	#include <landvehicle_include.h>
};