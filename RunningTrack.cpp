#include "RunningTrack.h"
#include <iostream>

RunningTrack::RunningTrack(double _len) : Obstacle("Бігова доріжка")
{
	len = _len;
}

double RunningTrack::GetLen() const
{
	return len;
}

bool RunningTrack::Overcome(Player& player) const
{
	if (player.Run(len)) {
		std::cout << "Учасник " << player.GetName() << " пройшов перешкоду " << this->GetName() << " на дистанції " << len << "км" << std::endl;
	}
	else {
		std::cout << "Учасник " << player.GetName() << " НЕ пройшов перешкоду " << this->GetName() << " на дистанції " << len << "км\nПройдено ->" << player.GetRun();
	}
	return player.Run(len);
}
