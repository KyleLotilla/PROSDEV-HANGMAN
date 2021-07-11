#pragma once

class Oxygen
{
public:
	Oxygen();
	bool hasOxygen();
	~Oxygen();
private:
	int nOxygen = 20, curOxygen = 10;
};