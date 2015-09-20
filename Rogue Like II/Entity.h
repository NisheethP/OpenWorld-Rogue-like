#pragma once
#ifndef _ENTITY_H_
#define _ENTITY_H_
#include "Tile.h"

enum EntityType
{
	DefaultEntity,
	PlayerEntity
};
class Entity : public Tile
{
protected:
	EntityType entityType;
public:
	Entity(EntityType type = DefaultEntity);
	~Entity();
};

#endif