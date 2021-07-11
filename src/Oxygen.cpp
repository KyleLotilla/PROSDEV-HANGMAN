#include "Oxygen.h"

Oxygen::Oxygen()
{
	
}

void Oxygen::depleteOxygen()
{
	this->curOxygen = this->curOxygen - 1;
}

int Oxygen::getCurrentOxygen()
{
	return this->curOxygen;
}

bool Oxygen::hasOxygen()
{
	if (this->curOxygen == 0) {
		return false;
	}
	else
		return true;
}

Oxygen::~Oxygen()
{
}