class DestructionEffects;
class UserActions
{
	class ShowHouseMenu
	{
	
		displayName = "<img image='\cl3_images\InfoImages\house_ca.paa' size='1' shadow=2 /> House Options";
		//displayName = "$STR_Houseinfo";
		position = CL3_ActionPositionPoint;
		radius = CL3_ActionPositionRange;
		onlyforplayer = 0;
		condition = "!CL3MOD_ActionLock";
		statement = "[str this] spawn cl3mod_fnc_homemaker_show_GUI";
	};
};