#ifndef BARN_H
#define BARN_H
#include "Farm.h"
class Barn : public Farm {

private:
	int currentAmount;

public:

	Barn(std::string cropType, int capacity, int currentAmount);

	int getCurrentAmount() ;

	int getTotalCapacity() override;

	std::string getCropType() override;

	void addFarmUnit(Farm* farm) override;

	void removeFarmUnit(Farm* farm) override;

	virtual Iterator* createIterator() override;

	void setCurrentAmount(int amount);

	virtual void harvest() override;
};

#endif
