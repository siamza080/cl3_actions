#include "\cl3_mod_client\cl3mod_defines.hpp"
private ["_exit","_switch","_Soldier","_isWater","_moveverlocity","_house","_objectowner","_cG","_objectname","_gD","_gW","_indexT","_CL3MOD_homedata","_homeoffercost","_homeoffer","_i","_hometrunk","_homeoffers","_w","_Bcash","_collected","_timeout","_customnumber","_index","_cfgi","_item","_model","_count","_type","_Objplayer","_cash","_no","_CheckIfpickupisreal","_object","_CL3MOD_DisName","_cfginfo","_CL3MOD_Pic"];
_CheckIfpickupisreal =
{
	private["_w"];
	_w = _this getVariable["hunter", ""];
	if(isNil "CL3MOD_LocalPlayerName")then{waitUntil{!(isNil "CL3MOD_LocalPlayerName")};};
	if (!(_w == ""))then
	{
		if (!(format["%1", _w] == format["%1", CL3MOD_LocalPlayerName]))then
		{
			systemChat format[localize "STR_Sorryitemcollected", _w];
			CL3MOD_ActionLock = false;
		};
	};
};
if (!CL2sysLockSwitch)exitWith
{
	[localize "STR_CL3MOD_ActionLock1", "red","Action Lock", "actionLock", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
	CL3MOD_KeyBlock=false;
};
sleep random(1.0);
if (CL3MOD_ActionLock)exitWith
{
	[localize "STR_CL3MOD_ActionLock", "red", "Action Lock", "actionLock", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
	if (isNil"CL3MOD_ActionLock1f651f6")then
	{
		CL3MOD_ActionLock1f651f6 = false;
	};
	if (!CL3MOD_ActionLock1f651f6)then
	{
		CL3MOD_ActionLock1f651f6 = true;
		[]spawn
		{
			sleep 10;
			CL3MOD_ActionLock = false;
			CL3MOD_ActionLock1f651f6 = false;
		};
	};
};
if (player getVariable["HandCuffed", false])exitWith
{
	[localize "STR_URcuffed", "red", "Hand Cuffed", "handcuff", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
	CL3MOD_KeyBlock = false;
};
if (player getVariable["CableHandCuffed", false])exitWith
{
	[localize "STR_URcuffed", "red", "Cable Hand Cuffed", "handcuff", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
	CL3MOD_KeyBlock = false;
};
_exit = false;
waitUntil{!(isNil "CL3MOD_Medical_Animation_Filter")};
if(player call cl3mod_fnc_IsReviveAnimation)then
{
	_exit = true;
};
if(_exit)exitWith
{
	systemChat localize "STR_YourWaitingToBeRevived";
};
CL3MOD_ActionLock = true;
_object = _this select 0;
_switch = if (count(_this) > 1)then {_this select 1}else {"lemmons"};
sleep random(1.0);
switch (_switch) do
{
	case "GeneraterSwitch":
	{
		if ((_object getVariable['CL3_LightSwitch', false]))then
		{
			//off
			[_object, "CL3_LightSwitch", false, true] call cl3mod_fnc_set_Variable;
			{
				if !(isNil "_x")then
				{
					_x setDammage 0.95;
				};
				sleep random(0.3);
			}forEach(nearestObjects[(getPos _object), ['Lamps_base_F', 'PowerLines_base_F', 'Land_FloodLight_F'], 3000]);
		} else {
			//on
			[_object, "CL3_LightSwitch", true, true] call cl3mod_fnc_set_Variable;
			{
				if !(isNil "_x")then
				{
					_x setDammage 0;
				};
				sleep random(0.3);
			}forEach(nearestObjects[(getPos _object), ['Lamps_base_F', 'PowerLines_base_F', 'Land_FloodLight_F'], 3000]);
		};
	};
	case "BoatPush":
	{
		playSound "Counter";
		if (isDedicated) exitWith {};
		_Soldier = player;
		if (!(alive _object))exitWith
		{
			titleText["Vehicle is dead", "PLAIN DOWN", 1];
		};
		_isWater = surfaceIsWater position _Soldier;
		if (_isWater)exitWith
		{
			titleText["Please exit the water to get some grip", "PLAIN DOWN", 1];
		};
		if (_Soldier in(crew _object))exitWith
		{
			titleText["Blowing in the wind will not move this!! Getout first", "PLAIN DOWN", 1];
		};
		if((Owner (_object)) != 0)then
		{
			_object setOwner(owner(_Soldier));
		};
		titleText["Pushing", "PLAIN DOWN", 1];
		_Soldier playMove "AmovPercMstpSnonWnonDnon_AinvPercMstpSnonWnonDnon_Putdown";
		sleep 1;
		_moveverlocity =
		    [
		        ((sin(direction _Soldier)) * 3),
		        ((cos(direction _Soldier)) * 3),
		        0
		    ];
		_object setVelocity _moveverlocity;
	};
	case "CarSearchbomb":
	{
		playSound "Counter";
		[_object]call CL3MOD_fnc_SearchCarBomb;
	};
	case "fishStrike":
	{
		[_object]call CL3MOD_fnc_Fishing_Strike;
	};
	case "loadbike":
	{
		playSound "Counter";
		[_object, 0]call CL3MOD_fnc_LoadBikeInVehicle;
	};
	case "unloadbike":
	{
		playSound "Counter";
		[_object, 1]call CL3MOD_fnc_LoadBikeInVehicle;
	};
	case "housesorage":
	{
		if(_object call CL3MOD_fnc_HouseActions_HouseStorage)then
		{
			closeDialog 0;
			[player, player, "", ["CarStorageOpen1", player]] execVM "\cl3_mod_client\functions\f\cl3mod_client_open\fn_Client_Open_Main.sqf";
		}else{
			systemChat "Restricted";
		};
	};
	case "houselock":
	{
		if(_object call CL3MOD_fnc_HouseActions_HouseLock)then
		{
			CL3MOD_Currentbuyhouse156s = _object;
			[
				_object,
				[
					["doorlock",true]
				]
			] call CL3MOD_fnc_homemaker_setData;
			if(typeName _object == "STRING")then{_object = call compile _object;};
			if(isNull _object OR !(_object isKindOf "House_F")) exitWith {};
			_numberOfDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _object) >> "numberOfDoors");
			if(_numberOfDoors == -1 OR _numberOfDoors == 0) exitWith {};
			for "_i" from 1 to _numberOfDoors do
			{
				_object animate[format["door_%1_rot",_i],0];
				_object setVariable[format["bis_disabled_Door_%1",_i],1,true];
			};
			_object setVariable["locked",true,true];
		}else{
			systemChat "Restricted";
		};
	};
	case "houseunlock":
	{
		if(_object call CL3MOD_fnc_HouseActions_HouseUnLock)then
		{
			CL3MOD_Currentbuyhouse156s = _object;
			[
				_object,
				[
					["doorlock",false]
				]
			] call CL3MOD_fnc_homemaker_setData;
			if(typeName _object == "STRING")then{_object = call compile _object;};
			if(isNull _object OR !(_object isKindOf "House_F")) exitWith {};
			_numberOfDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _object) >> "numberOfDoors");
			if(_numberOfDoors == -1 OR _numberOfDoors == 0) exitWith {};
			for "_i" from 1 to _numberOfDoors do
			{
				_object setVariable[format["bis_disabled_Door_%1",_i],0,true];
			};
			_object setVariable["locked",false,true];
		}else{
			systemChat "Restricted";
		};
	};
	case "houseunlockcop":
	{
		_lockpickinv = ["Lock Pick"] call CL3MOD_GetClientItemCount;
		_opencopdoor = false;
		if(_lockpickinv > 0)then
		{
			["Lock Pick", 1] call CL3MOD_RemoveInventoryItem;
			if([100,[0,20]]call CL3MOD_ChanceRoutine)then
			{
				systemChat "Sorry you failed to use this item";
			}else{
				[player, "CL3_tools_doorpick"] call CBA_fnc_globalSay3d;
				sleep 13.3;
				_opencopdoor = true;
			};
		};
		if(_opencopdoor)then
		{
			CL3MOD_Currentbuyhouse156s = _object;

			if(typeName _object == "STRING")then{_object = call compile _object;};
			if(isNull _object OR !(_object isKindOf "House_F")) exitWith {};
			_numberOfDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _object) >> "numberOfDoors");
			if(_numberOfDoors == -1 OR _numberOfDoors == 0) exitWith {};
			for "_i" from 1 to _numberOfDoors do
			{
				_object setVariable[format["bis_disabled_Door_%1",_i],0,true];
			};
			_object setVariable["locked",false,true];
		}else{
			systemChat "Restricted";
		};
	};
	case "houselockcop":
	{
		CL3MOD_Currentbuyhouse156s = _object;
		if(typeName _object == "STRING")then{_object = call compile _object;};
		if(isNull _object OR !(_object isKindOf "House_F")) exitWith {};
		_numberOfDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _object) >> "numberOfDoors");
		if(_numberOfDoors == -1 OR _numberOfDoors == 0) exitWith {};
		for "_i" from 1 to _numberOfDoors do
		{
			_object setVariable[format["bis_disabled_Door_%1",_i],1,true];
		};
		_object setVariable["locked",true,true];
	};
	
	case "houseLights":
	{
		if(_object call CL3MOD_fnc_HouseActions_HouseLock)then
		{
			if(typeName _object == "STRING")then{_object = call compile _object;};
			_switch = if(isNull (_object getVariable ["lightSource",ObjNull]))then{[_object,true]}else{[_object,false]};
			[_switch,"cl3mod_fnc_homemaker_Lights",true,false] spawn bis_fnc_MP;
		}else{
			systemChat "Restricted";
		};
	};
	case "raidhouse":
	{
		if(_object call CL3MOD_fnc_HouseActions_HouseRaid)then
		{
			CL3MOD_Currentbuyhouse156s = _object;
			closeDialog 0;
			_cG = false;
			_gW = "cl_bigredkey";
			if (_gW != "")then
			{
				if (_gW in(weapons player))then{_cG = true;
												   } else {
						_cG = false;
					};
			} else {
				_cG = true;
			};
			if (_cG)then
			{
				_objectname = [_object,"objectname"]call CL3MOD_fnc_homemaker_getData;
				if(!isNil "_objectname")then
				{
					_objectowner = [_object,"owner"]call CL3MOD_fnc_homemaker_getData;
					[
						_object,
						[
							["doorlock",false]
						]
					] call CL3MOD_fnc_homemaker_setData;
					CL3MOD_UpdateHomesLockEventHandler = [_objectname, false];
					publicVariableServer "CL3MOD_UpdateHomesLockEventHandler";
					[-1, {_this call bis_fnc_sayMessage}, [_object,"bigredkey","say3d"]] call CBA_fnc_globalExecute;
					player removeWeapon(_gW);
					[-1, {systemChat format["%1 has raided %2 house", (_this select 0), (_this select 1)]}, [CL3MOD_LocalPlayerName, _objectowner]] call CBA_fnc_globalExecute;
					[0, {
						if (isServer)then
						{
							diag_log format["Debug: cl_bigredkey %1 has raided %2 house", _this select 0, _this select 1];
							sleep 1000;
							CL3MOD_UpdateHomesLockEventHandler = [(_this select 2), true];
							publicVariableServer "CL3MOD_UpdateHomesLockEventHandler";
						};
					}, [CL3MOD_LocalPlayerName, _objectowner, _objectname]] call CBA_fnc_globalExecute;
				};
			} else {
				_gD = ((_gW)call CL3MOD_fnc_GearInteraction_Config)select 1;
				[format["You need a %1 to raid this house", _gD], "Red", "House", "house", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
			};
		}else{
			systemChat "Restricted";
		};
	};
	case "robhouse":
	{
		if(_object call CL3MOD_fnc_HouseActions_RobHouse)then
		{
			CL3MOD_Currentbuyhouse156s = _object;
			closeDialog 0;
			_cG = false;
			_gW = "cl_bigredkey";
			if (_gW != "")then
			{
				_cG = if (_gW in(weapons player))then{true}else {
					false
				};
			} else {
				_cG = true;
			};
			if (_cG)then
			{
				_objectname = [_object,"objectname"]call CL3MOD_fnc_homemaker_getData;
				if(!isNil "_objectname")then
				{
					_objectowner = [_object,"owner"]call CL3MOD_fnc_homemaker_getData;
					[
						_object,
						[
							["doorlock",false]
						]
					] call CL3MOD_fnc_homemaker_setData;
					CL3MOD_UpdateHomesLockEventHandler = [_objectname,false];
					publicVariableServer "CL3MOD_UpdateHomesLockEventHandler";
					[-1, {_this call bis_fnc_sayMessage}, [_object,"bigredkey","say3d"]] call CBA_fnc_globalExecute;
					player removeWeapon(_gW);
					if (_objectowner == "empty_name")then
					{
						[-1, {systemChat "A house has just been robbed"}, []] call CBA_fnc_globalExecute;
					} else {
						[-1, {systemChat format["%1 house has been robbed", _this select 0]}, [_objectowner]] call CBA_fnc_globalExecute;
					};
					[0,
					 {
						 if (isServer)then
						{
							diag_log format["Debug: cl_bigredkey %1 has been robbed %2 house", _this select 0, _this select 1];
							sleep 1000;
							CL3MOD_UpdateHomesLockEventHandler = [(_this select 2), true];
							publicVariableServer "CL3MOD_UpdateHomesLockEventHandler";
						};
					 }, [CL3MOD_LocalPlayerName,_objectowner,_objectname]] call CBA_fnc_globalExecute;
				} else {
					_gD = ((_gW)call CL3MOD_fnc_GearInteraction_Config)select 1;
					[format["You need a %1 to rob this house", _gD], "Red", "House", "house", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
				};
			};
		}else{
			systemChat "Restricted";
		};
	};
	case "bidshouse":
	{
		if(_object call CL3MOD_fnc_HouseActions_ViewBids)then
		{
			CL3MOD_Currentbuyhouse156s = _object;
			closeDialog 0;
			createDialog "Dialog_housebids";
			while {!(dialog)}do {
				sleep 0.1;
			};
			_CL3MOD_homedata = [_object,"data"]call CL3MOD_fnc_homemaker_getData;
			if(!isNil "_CL3MOD_homedata")then
			{
				{
					if (!(isNil "_x"))then
					{
						_indexT = lbAdd[CL3MOD_CivMenu_TicketChooseList, format["%1 ($%2)", _x select 1, [_x select 0, 1, 0, true] call CL3MOD_fnc_formatNumber]];
						lbSetData[CL3MOD_CivMenu_TicketChooseList, _indexT, _x select 1];
						lbSetValue[CL3MOD_CivMenu_TicketChooseList, _indexT, _x select 0];
					};
				} forEach(_CL3MOD_homedata select 1);
				lbSetCurSel[CL3MOD_CivMenu_TicketChooseList, 0];
			};
		}else{
			systemChat "Restricted";
		};
	};
	case "trunkhouse":
	{
		if(_object call CL3MOD_fnc_HouseActions_Trunk)then
		{
			closeDialog 0;
			[_object] spawn CL3MOD_fnc_OpenhouseTrunk;
		}else{
			systemChat "Restricted";
		};
	};
	case "traidhouse":
	{
		if(_object call CL3MOD_fnc_HouseActions_MakeOffer)then
		{
			CL3MOD_Currentbuyhouse156s = _object;
			closeDialog 0;
			createDialog "Dialog_TraidhouseChoose";
			while {!(dialog)}do
			{
				sleep 1;
			};
			//_CL3MOD_homedata = [_object,"data"]call CL3MOD_fnc_homemaker_getData;
			_r = [_object,"all"]call CL3MOD_fnc_homemaker_getData;
			_ownerable = _r select 0;
			_owner = _r select 1;
			_doorlock = _r select 2;
			_data = _r select 3;
			_price = _r select 4;
			_objectname = _r select 5;
			if(!isNil "_data")then
			{
				_hometrunk = _data select 0;
				_homeoffers = _data select 1;
				_i = 0;
				{
					if !(isNil "_x")then
					{
						_homeoffer = _x select 0;
						if (_homeoffer > _price)then
						{
							_price = _homeoffer;
						};
					};
					_i = _i + 1;
				}forEach _homeoffers;
				ctrlSetText[CL3MOD_TicketPayField, format[localize "STR_Traidhouseminoff", [_price + 1, 1, 0, true] call CL3MOD_fnc_formatNumber, _i]];
				ctrlSetText[CL3MOD_ShopAmountBuyBox, [(_price + 1), 1, 0, false] call CL3MOD_fnc_formatNumber];
			};
		}else{
			systemChat "Restricted";
		};
	};
	case "savehouse":
	{
		if(_object call CL3MOD_fnc_HouseActions_Save)then
		{
			closeDialog 0;
			[] spawn CL3MOD_fnc_fSaveProgress;
		}else{
			systemChat "Restricted";
		};
	};
	case "buyhouse":
	{
		if(_object call CL3MOD_fnc_HouseActions_BuyHouse)then
		{
			CL3MOD_Currentbuyhouse156s = _object;
			closeDialog 0;
			createDialog "Dialog_BuyhouseChoose";
			while {!(dialog)}do
			{
				sleep 1;
			};
			_price = [_object,"price"]call CL3MOD_fnc_homemaker_getData;
			_price = [_price,_object] call cl3mod_fnc_homemaker_CheckPrice;
			if(!isNil "_price")then
			{
				ctrlSetText[CL3MOD_TicketPayField, format[localize "STR_HouseCosting",[_price, 1, 0, true] call CL3MOD_fnc_formatNumber]];
			};
		}else{
			systemChat "Restricted";
		};
	};

	case "abandonhouse":
	{
		if(_object call CL3MOD_fnc_HouseActions_abandon)then
		{
			closeDialog 0;
			_object spawn CL3MOD_fnc_homemaker_abandon;
		}else{
			systemChat "Restricted";
		};
	};
	case "carkey":
	{
		[_object]call CL3MOD_CarkeyPickup;
	};
	case "jumpout":
	{
		[vehicle player,player] call cl3mod_client_Eject_No_Chute;
		unassignVehicle player;
		CL3MOD_ActionLock = false;
	};
	case "lock":
	{
		_cfginfo = (typeof _object) call CL3MOD_fnc_GearInteraction_Config;
		_CL3MOD_DisName = _cfginfo select 1;
		_CL3MOD_Pic     = _cfginfo select 2;
		if (_CL3MOD_DisName == "")then
		{
			_CL3MOD_DisName = _object;
		};
		//systemChat format["Lock %1 (Locked:%2)", _CL3MOD_DisName, locked _object];
		if ((locked _object) == 1)then
		{
			[_object, true] spawn CL3MOD_fnc_LockVehicle;
			playSound "cl3_carlock";
			CL3MOD_ActionLock = false;
		} else {
			[_object, false] spawn CL3MOD_fnc_LockVehicle;
			playSound "cl3_carlock1";
			CL3MOD_ActionLock = false;
		};
	};
	case "info":
	{
		if (!(alive _object))then
		{
			playSound "Counter";
			_w = _object getVariable['VehicleOwner', ""];
			if (!(_w == ""))then
			{
				[format["Vehicle owner %1", _w], "Green", "Vehicle Info", "vehicle", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
			};
		};
	};
	case "infoAdmin":
	{
		if (!(alive _object))then
		{
			playSound "Counter";
			_sa = _object getVariable["Savable", "Error Var"];
			_vo = _object getVariable["VehicleOwner", "Error Var"];
			_ra = _object getVariable["RadioSwitch", "Error Var"];
			_tu = _object getVariable["TuneUPLvl", "Error Var"];
			
			_tr = _object getVariable["Turbo", "Error Var"];
			_ca = _object getVariable["CarAlarmLvl", "Error Var"];
			_lj = _object getVariable["LowJackTracker", "Error Var"];
			_in = _object getVariable["insurance", "Error Var"];
			
			_mw = _object getVariable["MaxWeight", "Error Var"];
			_ct = _object getVariable["CarTrunk", "Error Var"];
			_np = _object getVariable["CL3MOD_NP", "Error Var"];
			_debuginfo = "";
			_debuginfo = format["%1Saveable: %2\n", _debuginfo, _sa];
			_debuginfo = format["%1VehicleOwner: %2\n", _debuginfo, _vo];
			_debuginfo = format["%1RadioSwitch: %2\n", _debuginfo, _ra];
			_debuginfo = format["%1TuneUPLvl: %2\n", _debuginfo, _tu];
			_debuginfo = format["%1Turbo: %2\n", _debuginfo, _tr];
			_debuginfo = format["%1CarAlarmLvl: %2\n", _debuginfo, _ca];
			_debuginfo = format["%1LowJackTracker: %2\n", _debuginfo, _lj];
			_debuginfo = format["%1insurance: %2\n", _debuginfo, _in];
			_debuginfo = format["%1MaxWeight: %2\n", _debuginfo, _mw];
			_debuginfo = format["%1CarTrunk: %2\n", _debuginfo, _ct];
			_debuginfo = format["%1CL3MOD_NP: %2", _debuginfo, _np];
			hintsilent _debuginfo;
		};
	};
	
	
	case "CollectEvidence":
	{
		if ((alive _object))then
		{
			playSound "Counter";
			_w = _object getVariable['EvidenceBox', ""];
			if (!(_w == ""))then
			{
				[format["Evidence: %1", _w], "Green", "Evidence Info", "evidence", 4, 1, 1.4] spawn CL3MOD_fnc_Hints;
			};
		};
				_Animation =
				[
					"CL3_anim_GatheringIn1",
					"CL3_anim_GatheringIn2",
					"CL3_anim_GatheringIn3",
					"CL3_anim_GatheringIn5",
					"CL3_anim_GatheringIn5",
					"CL3_anim_GatheringIn6"
				] call bis_fnc_selectrandom;
				[player,_Animation] call cl3mod_fnc_PlayMoveNow;

		deleteVehicle _object;
	};
	case "RemoveEvidence":
	{
		playSound "Counter";
		_w = _object getVariable['EvidenceBox', ""];
		if (!(_w == ""))then
		{
			[format["Evidence Removed: %1", _w], "Red", "Evidence Info", "evidence", 4, 1, 1.4] spawn CL3MOD_fnc_Hints;
		};
		_Animation =
		[
			"CL3_anim_GatheringIn1",
			"CL3_anim_GatheringIn2",
			"CL3_anim_GatheringIn3",
			"CL3_anim_GatheringIn5",
			"CL3_anim_GatheringIn5",
			"CL3_anim_GatheringIn6"
		] call bis_fnc_selectrandom;
		[player,_Animation] call cl3mod_fnc_PlayMoveNow;
		deleteVehicle _object;
	};
	case "beartrappoke":
	{
		if([100,[0,50]]call CL3MOD_ChanceRoutine)then
		{
			[player,"CL3_anim_beartrap1"] call cl3mod_fnc_switchMove;
			_object attachTo [player,[-0.05,-0.22,-0.15],"leftfoot"];
			_scream = CL3MOD_Audio_ScreamsArray call bis_fnc_selectrandom;
			[_object, "CL3_bearTrap_shut"] call CBA_fnc_globalSay3d;
			[player, _scream] call CBA_fnc_globalSay3d;
			_object animate["animatetilt",1];
			_object animate["animateleftjaw",1];
			_object animate["animaterightjaw",1];
			player setHit["Legs",1];
			sleep 1;
			_trapAnimations = ["cl3_anim_beartrap1","cl3_anim_beartrap2"];
			if(!(toLower(animationState player) in _trapAnimations))then
			{
				[player, "CL3_anim_beartrap1"] call cl3mod_fnc_switchMove;
			};
			sleep 24;
			deleteVehicle _object;
		}else{
			["Bear Trap", 1] call CL3MOD_AddInventoryItem;
			[_object, "CL3_bearTrap_shut"] call CBA_fnc_globalSay3d;
			deleteVehicle _object;
		};
	};
	case "killweed":
	{
		[_object, "hunted", 1, true] call cl3mod_fnc_set_Variable;
		sleep([1, 2.1] call BIS_fnc_randomInt);
		_collected = _object getVariable "collected";
		if (!(isNil "_collected"))exitwith
		{
			systemChat "Sorry this Item has already been collected";
		};
		[_object, "collected", 1, true] call cl3mod_fnc_set_Variable;
		if (isNil "CL3MOD_killweed_Active")then
		{
			CL3MOD_killweed_Active = false;
		};
		if (CL3MOD_killweed_Active)exitWith
		{
			systemChat "Processing";
		};
		CL3MOD_killweed_Active = true;
		_object call _CheckIfpickupisreal;
		if (!CL3MOD_ActionLock)exitWith
		{
			systemChat "Action lock exit";
		};
		sleep([1, 2.1] call BIS_fnc_randomInt);
		_object call _CheckIfpickupisreal;
		if (!CL3MOD_ActionLock)exitWith
		{
			systemChat "Action lock exit";
		};
		[_object, "hunter", CL3MOD_LocalPlayerName, true] call cl3mod_fnc_set_Variable;
				_Animation =
				[
					"CL3_anim_GatheringIn1",
					"CL3_anim_GatheringIn2",
					"CL3_anim_GatheringIn3",
					"CL3_anim_GatheringIn5",
					"CL3_anim_GatheringIn5",
					"CL3_anim_GatheringIn6"
				] call bis_fnc_selectrandom;
				[player,_Animation] call cl3mod_fnc_PlayMoveNow;


		sleep 4;
		_object call _CheckIfpickupisreal;
		if (!CL3MOD_ActionLock)exitWith
		{
			systemChat "Action lock exit";
		};
		_timeout = time + 5;
		waitUntil { (animationState player == CL3MOD_Mainanimation) || time > _timeout };
		_object call _CheckIfpickupisreal;
		if (!CL3MOD_ActionLock)exitWith
		{
			systemChat "Action lock exit";
		};
		deleteVehicle _object;
		if (CL3MOD_UnitRole == "COP")then
		{
			_Bcash = [1, 3000] call BIS_fnc_randomInt;
			[format["Plant removed and you have earned a bonus of $%1", _Bcash], "Green", "Plant Info", "plants", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
			[_Bcash]spawn CL3MOD_fAdjustCash;
		} else {
			[format["Plant Removed", ""], "Green", "Plant Info", "plants", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
		};
		CL3MOD_killweed_Active = false;
		CL3MOD_ActionLock = false;
	};
	case "menu":
	{
		playSound "Counter";
		[player, player, "", ["BAG", player]] execVM "\cl3_mod_client\functions\f\cl3mod_client_open\fn_Client_Open_Main.sqf";
	};
	case "vehiclemenu":
	{
		playSound "Counter";
		[_object, _object, "", ["VehicleMenu", _object]] execVM "\cl3_mod_client\functions\f\cl3mod_client_open\fn_Client_Open_Main.sqf";
	};
	case "radio_off":
	{
		playMusic "";
		0.1 fadeMusic CL3MOD_volin;
		[_object, "RadioSwitch", 0, true] call cl3mod_fnc_set_Variable;
	};
	case "radio_on":
	{
		private["_ok", "_cfg", "_count", "_i"];
		_ok = createDialog "DlgCL3MOD_RADIOoMusic";
		sleep 0.1;
		_cfg = (configFile >> "CfgMusic");
		_count = count _cfg;
		for [ {_i = 1}, { _i < _count }, { _i = _i + 1 }] do
		{
			if (!(_i == 34))then
			{
				_cfgi = _cfg select _i;
				_customnumber = "";
				if ((_i >= 35))then
				{
					_customnumber = format["%1: ", 2 + _i];
				};
				if (!(getText(_cfgi >> "Name") == ""))then
				{
					_index = ((uiNamespace getVariable "CL3MOD_RADIOoMusic_disp") displayCtrl 102) lbAdd format["%1%2", _customnumber, (getText(_cfgi >> "Name"))];
					((uiNamespace getVariable "CL3MOD_RADIOoMusic_disp") displayCtrl 102) lbSetData[_index, format["%1", configName _cfgi]];
				};
			};
		};
		[_object, "RadioSwitch", 1, true] call cl3mod_fnc_set_Variable;
	};
	case "item":
	{
		[_object, "hunted", 1, true] call cl3mod_fnc_set_Variable;
		sleep([1, 2.1] call BIS_fnc_randomInt);
		_collected = _object getVariable "collected";
		if (!(isNil "_collected"))exitWith
		{
			systemChat "Sorry this Item has already been collected";
		};
		[_object, "collected", 1, true] call cl3mod_fnc_set_Variable;
		_count = _object getVariable["count", 0];
		_type = typeOf _object;
		sleep([1, 2.1] call BIS_fnc_randomInt);
		_object call _CheckIfpickupisreal;
		if (!CL3MOD_ActionLock)exitWith
		{
			systemChat "Action lock exit";
		};
		[_object, "hunter", CL3MOD_LocalPlayerName, true] call cl3mod_fnc_set_Variable;
		_Animation =
		[
			"CL3_anim_GatheringIn1",
			"CL3_anim_GatheringIn2",
			"CL3_anim_GatheringIn3",
			"CL3_anim_GatheringIn5",
			"CL3_anim_GatheringIn5",
			"CL3_anim_GatheringIn6"
		] call bis_fnc_selectrandom;
		[player,_Animation] call cl3mod_fnc_PlayMoveNow;

		sleep([1, 4.1] call BIS_fnc_randomInt);
		_object call _CheckIfpickupisreal;
		if (!CL3MOD_ActionLock)exitWith
		{
			systemChat "Action lock exit";
		};
		_timeout = time + 5;
		waitUntil { (animationState player == CL3MOD_Mainanimation) || time > _timeout };
		sleep([0, 1.1] call BIS_fnc_randomInt);
		_object call _CheckIfpickupisreal;
		if (!CL3MOD_ActionLock)exitWith
		{
			systemChat "Action lock exit";
		};
		_Objplayer = _object getVariable["player", ""];
		if (!(isNil "_Objplayer"))then
		{
			systemChat format["Player who dropped it was %1", _Objplayer];
		};
		sleep([0, 1.1] call BIS_fnc_randomInt);
		_object call _CheckIfpickupisreal;
		if (!CL3MOD_ActionLock)exitWith
		{
			systemChat "Action lock exit";
		};
		deleteVehicle _object;
		{
			if !(isNil "_x")then
			{
				_item = _x select 0;
				_model = _x select 1;
				if (_type == _model) exitWith
				{
					[_item, _count] call CL3MOD_AddInventoryItem;
					[format[localize "STR_Collecteditem", _count, _item], "green", "Collected Item", "Item", 2, 1, 1.4] spawn CL3MOD_fnc_Hints;
					CL3MOD_ActionLock = false;
				};
			};
		}forEach CL3MOD_ObjectsArray;
	};
	default
	{
		[_object, "hunted", 1, true] call cl3mod_fnc_set_Variable;
		_collected = _object getVariable "collected";
		if (!(isNil "_collected"))exitWith
		{
			systemChat "Sorry this Item has already been collected";
		};
		[_object, "collected", 1, true] call cl3mod_fnc_set_Variable;
		[_object, "hunter", CL3MOD_LocalPlayerName, true] call cl3mod_fnc_set_Variable;
		_type = switch (tolower(typeOf _object)) do
		{
			case CL3MOD_CashGetUnder10kModel:
			{
				CL3MOD_CashGetUnder10kModel
			};
			case CL3MOD_CashGetOver10kModel:
			{
				CL3MOD_CashGetOver10kModel
			};
			case "fin_sand_f":
			{
				"dog"
			};
			case "fin_blackwhite_f":
			{
				"dog"
			};
			case "fin_ocherwhite_f":
			{
				"dog"
			};
			case "fin_tricolour_f":
			{
				"dog"
			};
			case "fin_random_f":
			{
				"dog"
			};
			case "alsatian_sand_f":
			{
				"dog";
			};
			case "alsatian_black_f": 
			{
				"dog"
			};
			case "alsatian_sandblack_f":
			{
				"dog"
			};
			case "alsatian_random_f": 
			{
				"dog"
			};
			case "cl3_dog1":
			{
				"dog"
			};
			case "cl3_dog2":
			{
				"dog"
			};
			case "cl3_hen_f":
			{
				"chicken"
			};
			case "cl3_cock_brown": 
			{
				"rooster"
			};
			case "cl3_white_brown":
			{
				"rooster"
			};
			case "rabbit_f":
			{
				"rabbit"
			};
			case "cl3_goat_black":
			{
				"chevon"
			};
			case "cl3_goat_white":
			{
				"chevon"
			};
			case "cl3_goat_dirt":
			{
				"chevon"
			};
			case "cl3_goat_old":
			{
				"chevon"
			};
			case "cl3_goat_sm_black":
			{
				"chevon"
			};
			case "cl3_goat_sm_white":
			{
				"chevon"
			};
			case "cl3_goat_sm_dirt":
			{
				"chevon"
			};
			case "cl3_goat_sm_old": 
			{
				"chevon"
			};
			case "cl3_sheep_blackwhite":
			{
				"lamb"
			};
			case "cl3_sheep_brown": 
			{
				"lamb"
			};
			case "cl3_sheep_white": 
			{
				"lamb"
			};
			case "cl3_sheep_tricolor": 
			{
				"lamb"
			};
			case "cl_drugscannabis2":
			{
				"freshweed"
			};
			case "cl_b_pinusm1s_ep1": 
			{
				"fresholive"
			};
			case "cl_p_papaver_ep1":
			{
				"freshopium"
			};
			case "cl_mushroom_plant":
			{
				"magic mushrooms"
			};
			case "cl_coca_plant":
			{
				"coca plant"
			};
			default 
			{
			""
			};
		};
		if (_type == "")exitWith
		{
			CL3MOD_ActionLock = false;
		};
		sleep([1, 1.1] call BIS_fnc_randomInt);
		_object call _CheckIfpickupisreal;
		if (!CL3MOD_ActionLock)exitWith
		{
			systemChat "Action lock exit";
		};
		if (_type == CL3MOD_CashGetOver10kModel || _type == CL3MOD_CashGetUnder10kModel)then
		{
			_cash = [_object, "cash"] call CL3MOD_CashPickUp;
			if (!(isNil "_cash"))exitWith
			{
				sleep([1, 1.1] call BIS_fnc_randomInt);
				_object call _CheckIfpickupisreal;
				if (!CL3MOD_ActionLock)exitWith
				{
					systemChat "Action lock exit";
				};
				_Animation =
				[
					"CL3_anim_GatheringIn1",
					"CL3_anim_GatheringIn2",
					"CL3_anim_GatheringIn3",
					"CL3_anim_GatheringIn5",
					"CL3_anim_GatheringIn5",
					"CL3_anim_GatheringIn6"
				] call bis_fnc_selectrandom;
				[player,_Animation] call cl3mod_fnc_PlayMoveNow;
				sleep([1, 4.1] call BIS_fnc_randomInt);
				_object call _CheckIfpickupisreal;
				if (!CL3MOD_ActionLock)exitWith
				{
					systemChat "Action lock exit";
				};
				_timeout = time + 5;
				waitUntil{ (animationState player == CL3MOD_Mainanimation) || time > _timeout };
				sleep([0, 1.1] call BIS_fnc_randomInt);
				_object call _CheckIfpickupisreal;
				if (!CL3MOD_ActionLock)exitWith
				{
					systemChat "Action lock exit";
				};
				[_cash]spawn CL3MOD_fAdjustCash;
				_Objplayer = _object getVariable["player", ""];
				if (!(isNil "_Objplayer"))then
				{
					systemChat format["Player who dropped it was %1", _Objplayer];
				};
				deleteVehicle _object;
			};
		} else {
			_no = ([1, 4] call BIS_fnc_randomInt);
			sleep([0, 1.1] call BIS_fnc_randomInt);
			_object call _CheckIfpickupisreal;
			if (!CL3MOD_ActionLock)exitWith
			{
				systemChat "Action lock exit";
			};
			_Animation =
			[
				"CL3_anim_GatheringIn1",
				"CL3_anim_GatheringIn2",
				"CL3_anim_GatheringIn3",
				"CL3_anim_GatheringIn5",
				"CL3_anim_GatheringIn5",
				"CL3_anim_GatheringIn6"
			] call bis_fnc_selectrandom;
			[player,_Animation] call cl3mod_fnc_PlayMoveNow;
			sleep([1, 4.1] call BIS_fnc_randomInt);
			_object call _CheckIfpickupisreal;
			if (!CL3MOD_ActionLock)exitWith
			{
				systemChat "Action lock exit";
			};
			_timeout = time + 5;
			waitUntil { (animationState player == CL3MOD_Mainanimation) || time > _timeout };
			sleep([1, 2] call BIS_fnc_randomInt);
			_object call _CheckIfpickupisreal;
			if (!CL3MOD_ActionLock)exitWith
			{
				systemChat "Action lock exit";
			};
			_Objplayer = _object getVariable["player", ""];
			if (!(isNil "_Objplayer"))then
			{
				if (!(_Objplayer == ""))then
				{
					systemChat format["Player who dropped it was %1", _Objplayer];
				};
			};
			deleteVehicle _object;
			CL3MOD_ActionLock = false;
			[_type, 0, _no, _no, player, CL3MOD_Mainanimation, "", ""] spawn CL3MOD_fGatherResource;
		};
		CL3MOD_ActionLock = false;
		};
	};
CL3MOD_ActionLock = false;