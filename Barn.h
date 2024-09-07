#ifndef BARN_H
#define BARN_H
#include "Farm.h"
class Barn : Farm {

public:
	int CurrentAmount;

	int getTotalCapacity();

	int getCurrentAmount();

public:
	Barn();

	void setCurrentAmount(int amount);
};

#endif
