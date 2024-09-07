#ifndef FARMUNIT_H
#define FARMUNIT_H
#include "Farm.h"

class FarmUnit : public Farm {

public:
	std::vector<FarmUnit*> farmLand;

	int getTotalCapacity();

	void addFarmUnit(Farm* farm);

	void removeFarmUnit(Farm* farm);

public:
	FarmUnit();

	Iterator* createIterator();
};

#endif
