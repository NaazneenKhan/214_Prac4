#ifndef BARN_H
#define BARN_H
#include "Farm.h"
#include "Iterator.h"
#include "Breadth-FirstTraversal.h"
#include "Depth-FirstTraversal.h"


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

	virtual Iterator* createIterator(bool useBFS)  ;

	void setCurrentAmount(int amount);

	virtual void harvest() override;
};

#endif
