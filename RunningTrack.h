#pragma once
#include "Obstacle.h"

class RunningTrack : public Obstacle
{
private:
	double len;
public:
	RunningTrack(double _len);
	~RunningTrack() = default;
	double GetLen() const;
	bool Overcome(Player& player) const override;
};

