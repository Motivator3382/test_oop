#pragma once
#include <string>

class Player
{	
protected:
	std::string name;
	double jump_height;
	double run_len;
public:
	Player(std::string _name, double jh, double rl);
	virtual bool Run(double len);
	virtual bool Jump(double height);
	virtual ~Player() = default;
	std::string GetName() const;
	double GetJump() const;
	double GetRun() const;
};

