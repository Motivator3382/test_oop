#include "Player.h"

Player::Player(std::string _name, double jh, double rl)
{
	name = _name;
	jump_height = jh;
	run_len = rl;
}

bool Player::Run(double len)
{
	return run_len >= len;
}

bool Player::Jump(double height)
{
	return jump_height >= height;
}

std::string Player::GetName() const
{
	return name;
}

double Player::GetJump() const
{
	return jump_height;
}

double Player::GetRun() const
{
	return run_len;
}
