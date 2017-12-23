#pragma once

class Piece
{
private:
	int x_;
	int y_;
	int playerCode;
public:
	Piece(int x, int y);
	virtual void moveTo(int x);
	int getValue();
};
