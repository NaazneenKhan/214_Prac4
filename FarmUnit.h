#ifndef FARMUNIT_H
#define FARMUNIT_H
#include "Farm.h"

class FarmUnit : public Farm {

private:
	std::vector<Farm*> farmLand;

public:
    FarmUnit();

	int getTotalCapacity() override ;

	std::string getCropType() override;

	void addFarmUnit(Farm* farm) override;

	void removeFarmUnit(Farm* farm) override;

	Iterator* createIterator() override;

};

#endif
