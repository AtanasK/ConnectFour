#include "GameBoard.h"


GameBoard::GameBoard()
{
	this->board = (int*)malloc(sizeof(int) * GameBoard::BOARD_SIZE);

	for (int i = 0; i < GameBoard::BOARD_SIZE; i++)
	{
		std::cout << board[i] << " ";
		this->board[i] = 0;
	}
}


GameBoard::~GameBoard()
{
	free(this->board);
}


void GameBoard::printBoard()
{
	for (int i = 0; i < BOARD_HEIGHT; i++)
		for (int j = 0; j < BOARD_WIDTH; j++)
			std::cout << getPiece(i, j) << ":" << i << ":" << j << "  ";
	for (int i = -1; i < GameBoard::BOARD_HEIGHT; i++)
	{
		std::cout << "| ";
		for (int j = 0; j < GameBoard::BOARD_WIDTH; j++)
		{
			if (i == -1)
			{
				std::cout << j + 1 << " ";
				continue;
			}

			int currentPiece = this->getPiece(i, j);
			char* value = "_ ";

			if (currentPiece == 1)
			{
				value = "O ";
			}
			else if (currentPiece == 2)
			{
				value = "X ";
			}
			std::cout << value;
		}

		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int GameBoard::getPiece(int x, int y)
{
	return this->board[y * GameBoard::BOARD_WIDTH + x];
}

void GameBoard::putPiece(int x, int player)
{
	int lastEmptyIndex = 0;
	for (int y = 0; y < GameBoard::BOARD_HEIGHT; y++)
	{
		if (this->board[y * GameBoard::BOARD_WIDTH + x] == 0)
		{
			lastEmptyIndex = y * GameBoard::BOARD_HEIGHT + x;
		}
		else
		{
			this->board[lastEmptyIndex] = player;
			break;
		}
	}
}
