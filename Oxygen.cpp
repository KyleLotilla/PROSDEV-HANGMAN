#include "Oxygen.h"

Oxygen::Oxygen()
{
	this->nOxygen = this->curOxygen;
}

bool Oxygen::hasOxygen()
{
	if (this->nOxygen == 0) {
		return false;
	}
	else
		return true;
}

Oxygen::~Oxygen()
{
}