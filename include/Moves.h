#pragma once
#include <iostream>

class Moves
{
public:
	Moves();
	void CardUsed();
	void IncreaseMoves();
	void Replenish();
	void displayMoves();
	bool hasMoves();
	~Moves();

private:
	int moves;
	int Maxmoves = 4;
	int currentMaxMoves = 2;
};

