#pragma once
#include "Moves.h"
#include "Card.h"
#include "LetterCard.h"
#include <time.h>  
#include <vector>
#include <iostream>
#include "Card.h"


typedef std::vector<Card*> PlayerCards;
class CardSystem
{

public:
	CardSystem();
	Card* PlayCard(int card);
	int GetNumCards();
	void draw();
	void discardAll();
	void display();
	~CardSystem();

private:
	PlayerCards playercards;

};

