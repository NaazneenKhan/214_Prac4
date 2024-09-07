#ifndef CROPFIELD_H
#define CROPFIELD_H
#include "Farm.h"
#include "SoilState.h"
#include <iostream>
using namespace std;

class CropField : public Farm {

public:
	SoilState* soilState;

	std::string getCropType();

	std::string getSoilStateName();

public:
virtual int getTotalCapacity() override;

	virtual std::string getCropType() override;

	virtual void addFarmUnit(Farm* farm) override;

	virtual void removeFarmUnit(Farm* farm) override;

	virtual Iterator* createIterator() override;
	CropField();

	void setSoil(SoilState* soilState);
};

#endif
