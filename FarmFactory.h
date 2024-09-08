#ifndef FARMFACTORY_H
#define FARMFACTORY_H

#include "Farm.h"
#include "Trucks.h"
#include "SoilState.h"

class FarmFactory {

private:
	Farm* farm;

protected:
	virtual Farm* createCropField(std::string cropType, int capacity, std::string soilstate) = 0;

	virtual Farm* createBarn(std::string cropType, int capacity, int currentAmount) = 0;

	virtual Trucks* createFertiliserTruck() = 0;

	virtual Trucks* createDeliveryTruck() = 0;
};

#endif
