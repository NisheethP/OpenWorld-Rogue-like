#include "Entity.h"


Entity::Entity(EntityType type)
{
	switch (type)
	{
	case PlayerEntity:
		tileColour = Helper::Colour::Cyan;
		tileSymbol = 'H';
		break;
	case DefaultEntity:
	default:
		type = DefaultEntity;
		tileColour = Helper::Colour::Gray;
	}
}


Entity::~Entity()
{
}
