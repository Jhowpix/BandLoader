class CfgPatches
{
	class BandLoader
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters"
		};
	};
};
class cfgMods
{
  class BandLoader_JP
   {
     dir="BandLoader";
	 picture="";
	 hideName=0;
	 hidePicture=0;
	 name="JhowPix";
	 credits="";
	 author="JhowPix";
	 authorID="76561199247898368";
	 extra=0;
	 type="mod";
	 dependencies[]=
	  {
		"Game",
		"World",
		"Mission"
	  };
        class defs
		{
           class gameScriptModule
		   {
               value="";
			   files[]=
			   {
                 "BandLoader/scripts/3_Game"
			   };
		   };
		   class worldScriptModule
		   {
               value="";
			   files[]=
			   {
                 "BandLoader/scripts/4_World"
			   };
		   };
		   class missionScriptModule
		   {
               value="";
			   files[]=
			   {
                 "BandLoader/scripts/5_Mission"
			   };
		   };
		};
	 
    };
};
class CfgVehicles 
{
	class Inventory_Base;	
	class Clothing_Base;	
	class Clothing;
	class JP_BandLoader_base: Clothing 
    {
		displayName = "JP_BandLoader";
		descriptionShort = "JP_BandLoader for reload fast your mag";
		model = "BandLoader\.p3d";                                      // criar modelo 3d para armband 
		inventorySlot[] =
         {
            "Armband"
        };
		itemInfo[] = 
        {
            "Clothing", 
            "Armband"
        };
		rotationFlags = 34;
		weight = 10;
		itemSize[] = {1, 2};
		ragQuantity = 1;
		varWetMax = 1;
		absorbency = 0.0;
		itemsCargoSize[] = {2, 2};
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		hiddenSelections[] = 
        {
            "camoGround", 
            "camoMale", 
            "camoFemale",
            "zbytek"
        };
		class DamageSystem 
        {
			class GlobalHealth 
            {
				class Health 
                {
					hitpoints = 100;
					healthLevels[] = 
					{
						{                           // criar o estado de destricao do objeto
							1.0,
							{
								"BandLoader\data\..._g.rvmat", 
								"BandLoader\data\..._g.rvmat",
								"BandLoader\data\..._g.rvmat",
								"BandLoader\data\..._g.rvmat"
							}
						}, 
						{
							0.7,
							{
								"BandLoader\data\..._g.rvmat",
								"BandLoader\data\..._g.rvmat",
								"BandLoader\data\..._g.rvmat",
								"BandLoader\data\..._g.rvmat"
							}
						}, 
						{
							0.5,
							{
								"BandLoader\data\..._damage.rvmat",
								"BandLoader\data\..._damage.rvmat",
								"BandLoader\data\..._damage.rvmat",
								"BandLoader\data\..._damage.rvmat"
							}
						},
						{
							0.3,
							{
								"BandLoader\data\..._damage.rvmat",
								"BandLoader\data\..._damage.rvmat",
								"BandLoader\data\..._damage.rvmat",
								"BandLoader\data\..._damage.rvmat"
							}
						}, 
						{
							0,
							{
								"BandLoader\data\..._destruct.rvmat",
								"BandLoader\data\..._destruct.rvmat",
								"BandLoader\data\..._destruct.rvmat",
								"BandLoader\data\..._destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes 
		{
			male = "BandLoader\..._m.p3d";          // criar modelos para homem e mulher 
			female = "BandLoader\..._f.p3d";
		};

		class AnimEvents
        {
			class SoundWeapon 
            {
				class pickUpItem 
                {
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};

				class drop 
                {
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};

	class JP_MagLoader: JP_BandLoader_base 
    {
		scope = 2;
		displayName = "$STR_CfgVehicles_Tag0";
		descriptionShort = "$STR_CfgVehicles_Tag1";
		hiddenSelectionsTextures[] = 
		{
			"JPMagLoader_co.paa",
			"JPMagLoader_co.paa",
		    "JPMagLoader_co.paa"
		};
	};

	class JP_MagLoaderI : JP_BandLoader_base 
    {
		scope = 2;
		displayName = "$STR_CfgVehicles_Tag_VoenStalker_0";
		descriptionShort = "$STR_CfgVehicles_Tag_VoenStalker_1";
		hiddenSelectionsTextures[] = 
		{
			"JPMagLoaderI_co.paa",
			"JPMagLoaderI_co.paa",
		    "JPMagLoaderI_co.paa"
		};
	};

	class JP_MagLoaderII : JP_BandLoader_base 
    {
		scope = 2;
		displayName = "$STR_CfgVehicles_Tag_Osoznanie_0";
		descriptionShort = "$STR_CfgVehicles_Tag_Osoznanie_1";
		hiddenSelectionsTextures[] = 
		{
			"JPMagLoaderII_co.paa",
			"JPMagLoaderII_co.paa",
		    "JPMagLoaderII_co.paa"
		};
	};

};