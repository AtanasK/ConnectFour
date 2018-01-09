#pragma once
#include <stdlib.h>
#include <iostream>

class GameBoard
{
private:
	int* board;
public:
	static const int BOARD_HEIGHT = 6;
	static const int BOARD_WIDTH = 7;
	static const int BOARD_SIZE = BOARD_HEIGHT * BOARD_WIDTH;
	GameBoard();
	~GameBoard();
	void printBoard();
	int getPiece(int x, int y);
	void putPiece(int x, int player);
};
