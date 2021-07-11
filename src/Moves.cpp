#include "..\include\Moves.h"

Moves::Moves()
{
	this->moves = this->currentMaxMoves;
}

void Moves::CardUsed()
{
	this->moves = this->moves - 1;
}

void Moves::IncreaseMoves()
{
	if (currentMaxMoves < Maxmoves) {
		this->currentMaxMoves = this->currentMaxMoves + 1;
	}
}

void Moves::Replenish()
{
	this->moves = this->currentMaxMoves;
}

void Moves::displayMoves()
{
	std::cout << "Number of moves: " << this->moves;
}

bool Moves::hasMoves()
{
	if (this->moves == 0) {
		return false;
	}
	else {
		return true;
	}
}

Moves::~Moves()
{
}
