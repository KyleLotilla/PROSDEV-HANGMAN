#pragma once
class Card
{
public:
	Card();
	void setLetter(char letter);
	char getLetter();
	virtual void useEffect() = 0;
	~Card();

private:
	char m_letter;
};

