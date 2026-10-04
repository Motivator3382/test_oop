#include "Obstacle.h"

Obstacle::Obstacle(std::string _type)
{
	type = _type;
}

std::string Obstacle::GetName() const
{
	return type;
}
