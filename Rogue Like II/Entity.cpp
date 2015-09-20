#include "Entity.h"


Entity::Entity(EntityType type)
{
	switch (type)
	{
	case DefaultEntity:
		tileColour = Helper::Colour::Gray;
		break;
	case PlayerEntity:
		tileColour = Helper::Colour::Cyan;
		break;
	default:
		type = DefaultEntity;
		tileColour = Helper::Colour::Gray;
	}
}


Entity::~Entity()
{
}
