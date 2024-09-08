#ifndef FARMUNIT_H
#define FARMUNIT_H
#include "Farm.h"
#include "Iterator.h"
#include "Breadth-FirstTraversal.h"
#include "Depth-FirstTraversal.h"


class FarmUnit : public Farm {

private:
	std::vector<Farm*> farmLand;

public:
    FarmUnit(std::string cropType, int capacity);

	int getTotalCapacity() override ;

	std::string getCropType() override;

	void addFarmUnit(Farm* farm) override;

	void removeFarmUnit(Farm* farm) override;

	Iterator* createIterator(bool useBFS) override;

};

#endif
