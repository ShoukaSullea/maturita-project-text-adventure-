#include "Game.h"
#include "Character.h"


Game::Game()
{
	action = 0;
}



void Game::Battle()
{
	using namespace std;

	string name;
	int hp;

	std::cout << "choose name" << endl;
	std::cin >> name;
	std::cout << name << endl;
	
	do {


		std::cout << "Battle" << std::endl << std::endl;
		std::cout << "1: Attack" << std::endl;
		std::cout << "2: Defend" << std::endl;
		std::cout << "3: Spell" << std::endl << std::endl;

		std::cout << "choose action";
		std::cin >> action;

		
	} while (hp>0);
}