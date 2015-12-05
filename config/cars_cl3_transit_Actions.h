	class OpenBackDoor
	{
		displayName="Open back doors";
		position="action";
		onlyforplayer=0;
		radius=1;
		condition="this animationPhase ""animatebackdoorl"" < 0.5";
		statement = "[this,'cl3_anims_door_open',[['animatebackdoorl',1],['animatebackdoorr',1]]] call CL3MOD_fnc_Door_Global_Sound_Animation";
	};
	class CloseBackDoor
	{
		displayName="Close back doors";
		position="action";
		onlyforplayer=0;
		radius=1;
		condition="this animationPhase ""animatebackdoorl"" > 0";
		statement = "[this,'cl3_anims_door_close',[['animatebackdoorl',0],['animatebackdoorr',0]]] call CL3MOD_fnc_Door_Global_Sound_Animation";
	};
	class OpenSideDoor
	{
		displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
		priority = 0.4;
		displayName="Open side door";
		position="action";
		onlyforplayer=0;
		radius=1;
		condition="this animationPhase ""animatesidedoor"" < 0.5";
		statement="[this,'cl3_anims_door_open',[['animatesidedoor',1]]] call CL3MOD_fnc_Door_Global_Sound_Animation";
	};
	class CloseSideDoor
	{
		displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
		priority = 0.4;
		displayName="Close side door";
		position="action";
		onlyforplayer=0;
		radius=1;
		condition="this animationPhase ""animatesidedoor"" > 0";
		statement="[this,'cl3_anims_door_close',[['animatesidedoor',0]]] call CL3MOD_fnc_Door_Global_Sound_Animation";
	};