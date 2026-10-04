#include <iostream>
#include <vector>
#include <Windows.h>

#include "Obstacle.h"
#include "RunningTrack.h"
#include "Wall.h"
#include "Player.h"
#include "Human.h"
#include "Robot.h"
#include "Cat.h"


int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	std::vector <std::unique_ptr<Player>> players;
	players.push_back(std::make_unique<Human>("Дмитро", 1.5, 2));
	players.push_back(std::make_unique<Cat>("Мурзік", 4, 0.7));
	players.push_back(std::make_unique<Robot>("K-3000", 0.2 , 3));

	std::vector <std::unique_ptr<Obstacle>> obstacles;
	obstacles.push_back(std::make_unique<RunningTrack>(1));
	obstacles.push_back(std::make_unique<Wall>(0.5));
	obstacles.push_back(std::make_unique<RunningTrack>(2));
	obstacles.push_back(std::make_unique<Wall>(1));

	for (const auto& player : players) {
		std::cout << "Випробування починає " << player->GetName() << std::endl;

		bool IsAllCompleted = true;
		for (const auto& obstacle : obstacles) {
			if (!obstacle->Overcome(*player)) {
				IsAllCompleted = false;
				std::cout << "\nНа жаль " << player->GetName() << " вибуває з випробування..." << std::endl;
				break;
			}
		}

		if (IsAllCompleted) {
			std::cout << player->GetName() << " успішно пройшов усі випробування\nВітаємо його з перемогою !!!" << std::endl;
		}
		std::cout << '\n';
	}
}