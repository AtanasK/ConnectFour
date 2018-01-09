#pragma once
#include "GameBoard.h"

class Game
{
private:
	GameBoard game_board_;
	bool gameOver;
	int winner;
	bool isPlayer;

public:
	Game();
	~Game();
	void startGame();
	void runGame();
};
