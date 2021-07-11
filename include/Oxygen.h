#pragma once

class Oxygen
{
public:
	Oxygen();
	void depleteOxygen();
	int getCurrentOxygen();
	bool hasOxygen();
	~Oxygen();
private:
	int maxOxygen = 20, curOxygen = 10;
};