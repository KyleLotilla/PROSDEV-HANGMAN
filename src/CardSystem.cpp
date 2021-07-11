#include "CardSystem.h"

CardSystem::CardSystem()
{
}

Card* CardSystem::PlayCard(int card)
{
	if (card > 0 && card <= this->playercards.size()) {
		Card* playedCard = this->playercards[card - 1];
		this->playercards.erase(this->playercards.begin() + (card - 1));
		return playedCard;
	}

	return NULL;
}

int CardSystem::GetNumCards()
{
	return this->playercards.size();
}

void CardSystem::draw()
{
	char letters[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I','J', 'K', 'L','M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X','Y', 'Z' };
	srand(time(NULL));
	
	for (int i = 0; i < 5; i++) {
		Card* card = new LetterCard();
		card->setLetter(letters[rand() % 26]);
		this->playercards.push_back(card);
	}
}


void CardSystem::discardAll()
{
	this->playercards.clear();
}

void CardSystem::display()
{
	for (int i = 0; i < this->playercards.size(); i++) {
		std::cout << " " << i + 1;
		std::cout << " " << this->playercards[i]->getLetter();
	}
}

CardSystem::~CardSystem()
{
}
