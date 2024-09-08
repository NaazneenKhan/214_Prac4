#ifndef CROPFIELD_H
#define CROPFIELD_H
#include "Farm.h"
#include "SoilState.h"
#include "Breadth-FirstTraversal.h"
#include "Depth-FirstTraversal.h"
#include <iostream>
//using namespace std;

class CropField : public Farm {

private:
	SoilState* soilState;

public:
    CropField(std::string cropType, int capacity, std::string soilstate);
 
	std::string getCropType() override;

	std::string getSoilStateName();

    int getTotalCapacity() override;

	std::string getCropType() override;

	void addFarmUnit(Farm* farm) override;

	void removeFarmUnit(Farm* farm) override;

	virtual Iterator* createIterator(bool useBFS) override;
	CropField();

	virtual void harvest() override ;

	void setSoil(SoilState* newsoilState);
};

#endif
