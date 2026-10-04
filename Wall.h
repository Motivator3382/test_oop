#pragma once
#include "Obstacle.h"

class Wall : public Obstacle
{
private:
	double height;
public:
	Wall(double _height);
	~Wall() = default;
	double GetHeight() const;
	bool Overcome(Player& player) const override;
};

