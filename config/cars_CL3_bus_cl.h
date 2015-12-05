#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
class CL3_bus_cl;
class CL3_bus_cl_jail: CL3_bus_cl
{
	#define CL3_ActionPositionPoint "drivewheel"
	#define CL3_ActionPositionRange 4.5
	class UserActions
	{
		#include "carsCop_include.h"
		#include "cars_default_include.h"
		//Add more actions
	};
	//Add set_texture
	class Reflectors	/// only front lights are considered to be reflectors to save CPU
	{
		class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
		{
			color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
			ambient[]		= {5, 5, 5};				/// nearly a white one
			position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
			direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
			hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
			selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
			size 			= 1;						/// size of the light point seen from distance
			innerAngle 		= 100;						/// angle of full light
			outerAngle 		= 179;						/// angle of some light
			coneFadeCoef 	= 10;						/// attenuation of light between the above angles
			intensity 		= 1;						/// strength of the light
			useFlare 		= true;						/// does the light use flare?
			dayLight 		= false;					/// switching light off during day saves CPU a lot
			flareSize 		= 1.0;						/// how big is the flare
			class Attenuation
			{
				start 			= 1.0;
				constant 		= 0; 
				linear 			= 0; 
				quadratic 		= 0.25; 
				hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
				hardLimitEnd 	= 60;		/// this allows adding more lights into scene
			};
		};		
		class LightCarHeadL02:LightCarHeadL01
		{
			position 	= "LightCarHeadL02";
			direction 	= "LightCarHeadL02_end";
			FlareSize 	= 0.5;						/// side bulbs aren't that strong
		};
		class LightCarHeadR01:LightCarHeadL01
		{
			position 	= "LightCarHeadR01";
			direction 	= "LightCarHeadR01_end";
			hitpoint 	= "Light_R";
			selection 	= "Light_R";
		};
		class LightCarHeadR02:LightCarHeadR01
		{
			position 	= "LightCarHeadR02";
			direction 	= "LightCarHeadR02_end";
			FlareSize 	= 0.5;
		};
	};
	aggregateReflectors[] = {{"LightCarHeadL01", "LightCarHeadL02"}, {"LightCarHeadR01", "LightCarHeadR02"}}; /// aggregating reflectors helps the engine a lot
	class EventHandlers
	{
		init = "handel = [_this select 0,[]] execVM '\cl3_wheeled\ems\police\scripts\cl3_lightbar.sqf'; [_this select 0] execVM '\cl3_wheeled\ems\police\scripts\cl3_siren.sqf'";
	};
};