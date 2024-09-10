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

	virtual std::string getSoilStateName();


    void setTotalCapacity(int newCapacity);

	int getCurrentAmount();

	std::string getCropType() override;

	virtual void harvest();

	void addFarmUnit(Farm* farm);// override;

	void removeFarmUnit(Farm* farm);// override;

	Iterator* createIterator(bool useBFS);// override;

	~FarmUnit() = default;

};

#endif
