class JP_BandLoader_base extends Clothing
{
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}
		if ( GetNumberOfItems() == 0 || !parent || parent.IsMan() )
		{
			return true;
		}
		return false;
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( GetQuantity() <= 1 )
		{
			return true;
		}
		return false;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
};

JP_MagLoader extends JP_BandLoader_base {};
JP_MagLoaderI extends JP_BandLoader_base {};
JP_MagLoaderII extends JP_BandLoader_base {};
