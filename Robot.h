#pragma once
#include "Player.h"

class Robot : public Player
{
public:
	Robot(std::string _name, double jh, double rl);
	~Robot() = default;
};

	