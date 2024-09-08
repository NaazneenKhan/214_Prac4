#ifndef FARM_H
#define FARM_H
#include <iostream>
//using namespace std; yuck 

#include <vector>
#include <string>

#include "Farm.h"
#include "Iterator.h"
#include "Trucks.h"

class Farm {

protected:
	std::string cropType;
	int capacity;
	std::vector<Trucks*> trucks;

public:
    Farm(std::string cropType, int capacity);

	Farm(){}

	virtual void harvest() = 0;

	virtual int getTotalCapacity() = 0;

	virtual std::string getCropType() = 0;

	virtual void addFarmUnit(Farm* farm) = 0;

	virtual void removeFarmUnit(Farm* farm) = 0;

	virtual Iterator* createIterator(bool useBFS) = 0;

	void soilNotification();

	void storageNotification();

	virtual ~Farm();
};

#endif
