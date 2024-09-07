#ifndef FARM_H
#define FARM_H
#include <iostream>
using namespace std;
#include "Trucks.h"
#include <vector>
#include "Farm.h"
#include "Iterator.h"

class Farm {

private:
	string cropType;
	int capacity;
	std::vector<Trucks*> trucks;

public:
	virtual int getTotalCapacity() = 0;

	virtual std::string getCropType() = 0;

	virtual void addFarmUnit(Farm* farm) = 0;

	virtual void removeFarmUnit(Farm* farm) = 0;

	virtual Iterator* createIterator() = 0;

	void soilNotification();

	void storageNotification();
};

#endif
