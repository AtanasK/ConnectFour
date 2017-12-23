#include "serialHeader.h"


int main()
{
	char confimation;

	std::cin >> confimation;

	while (confimation == 'y')
	{
		Game game = Game();
		game.startGame();

		game.runGame();

		std::cin >> confimation;
	}

	return 0;
}
