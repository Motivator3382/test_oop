#pragma once
#include "Player.h"

class Cat : public Player
{
public:
	Cat(std::string _name, double jh, double rl);
	~Cat() = default;
};

