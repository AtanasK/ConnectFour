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
	this->move = true;
}

void Game::runGame()
{
	do
	{
		game_board_.printBoard();

		std::cin >> winner;
	}
	while (!gameOver);
}
