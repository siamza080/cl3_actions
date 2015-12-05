class Air;
class Air_f: AllVehicles
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class Plane: Air
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class Helicopter: Air
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};



class Helicopter_Base_F:Helicopter
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class Heli_Attack_01_base_F: Helicopter_Base_F
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "action_door_back_L"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class B_Heli_Attack_01_F:Heli_Attack_01_base_F{};

class Heli_Attack_02_base_F: Helicopter_Base_F
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "action_door_back_L"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class O_Heli_Attack_02_F: Heli_Attack_02_base_F{};
class O_Heli_Attack_02_black_F: Heli_Attack_02_base_F{};

class Helicopter_Base_H:Helicopter_Base_F
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class Heli_Light_01_base_F: Helicopter_Base_H
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};

class B_Heli_Light_01_F: Heli_Light_01_base_F
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class Heli_Transport_01_base_F: Helicopter_Base_H
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "action_door_back_L"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class B_Heli_Transport_01_F: Heli_Transport_01_base_F{};
class B_Heli_Transport_01_camo_F: B_Heli_Transport_01_F{};
class Heli_Transport_02_base_F: Helicopter_Base_H
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "action_door_back_L"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};


class I_Heli_Transport_02_F:Heli_Transport_02_base_F
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "action_door_back_L"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class Plane_Base_F: AllVehicles
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class ArMaT_GliderUN: Plane_Base_F
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 14.5
#include "air_include.h"
};
class C130J: Plane_Base_F
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 20.5
#include "air_include.h"
};
class bwi_a3_t6a_BASE: Plane_Base_F
{
#undef CL3_ActionPositionPoint
#undef CL3_ActionPositionRange
#define CL3_ActionPositionPoint "pos driver"
#define CL3_ActionPositionRange 20.5
#include "air_include.h"
};