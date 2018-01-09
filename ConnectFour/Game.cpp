#include "Game.h"


Game::Game()
{
}

Game::~Game()
{
}

void Game::startGame()
{
	this->game_board_ = GameBoard();
	this->gameOver = false;
	this->winner = 0;
	this->isPlayer = true;
}

void Game::runGame()
{
	do
	{
		game_board_.printBoard();
		int move = 0;
		if (isPlayer)
		{
			std::cout << "Enter number for move (1-10): ";
			std::cin >> move;
			game_board_.putPiece(move, 2);
		}
	}
	while (!gameOver);
}
