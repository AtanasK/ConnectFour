#include "Piece.h"


Piece::Piece(int x, int y)
{
	this->x_ = x;
	this->y_ = y;
}

void Piece::moveTo(int x)
{
}

int Piece::getValue()
{
	return this->playerCode;
}
