#pragma once
#include "Player.h"

class Human : public Player
{
public:
	Human(std::string _name, double jh, double rl);
	~Human() = default;
};

