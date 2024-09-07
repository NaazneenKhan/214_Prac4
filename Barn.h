#ifndef BARN_H
#define BARN_H
#include "Farm.h"
class Barn : public Farm {

public:
	int CurrentAmount;

	int getTotalCapacity();

	int getCurrentAmount();

public:
virtual int getTotalCapacity() override;

	virtual std::string getCropType() override;

	virtual void addFarmUnit(Farm* farm) override;

	virtual void removeFarmUnit(Farm* farm) override;

	virtual Iterator* createIterator() override;

	Barn();

	void setCurrentAmount(int amount);
};

#endif
