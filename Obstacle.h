#pragma once
#include "Player.h"
#include <string>

class Obstacle
{
protected:
	std::string type;
public:
	Obstacle(std::string _type);
	virtual ~Obstacle() = default;
	std::string GetName() const;
	virtual bool Overcome(Player& player) const = 0;
};

