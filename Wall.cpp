#include "Wall.h"
#include <iostream>

Wall::Wall(double _height) : Obstacle("Стіна")
{
	height = _height;
}

double Wall::GetHeight() const
{
	return height;
}

bool Wall::Overcome(Player& player) const
{
	if (player.Jump(height)) {
		std::cout << "Учасник " << player.GetName() << " пройшов перешкоду " << this->GetName() << " на дистанції " << height << "м" << std::endl;
	}
	else {
		std::cout<< "Учасник " << player.GetName() << " НЕ пройшов перешкоду " << this->GetName() << " на дистанції " << height << "м\nПройдено ->" << player.GetJump();
	}
	return player.Jump(height);
}
