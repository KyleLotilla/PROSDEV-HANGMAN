#include "Card.h"

Card::Card()
{
}

void Card::setLetter(char letter)
{
    this->m_letter = letter;
}

char Card::getLetter()
{
    return this->m_letter;
}

Card::~Card()
{
}
