#include "serialHeader.h"


int main()
{
	char confimation;

	std::cout << "Do you want to play new game? (y/n)" << std::endl;
	std::cin >> confimation;

	while (confimation == 'y' || confimation == 'Y')
	{
		Game game = Game();
		game.startGame();
		game.runGame();

		std::cin >> confimation;
	}

	return 0;
}
