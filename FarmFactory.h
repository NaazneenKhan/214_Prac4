#ifndef FARMFACTORY_H
#define FARMFACTORY_H

#include "Farm.h"
#include "Trucks.h"

class FarmFactory {

private:
	Farm* farm;

protected:
	virtual Farm* createCropField() = 0;

	virtual Farm* createBarn() = 0;

	virtual Trucks* createFertiliserTruck() = 0;

	virtual Trucks* createDeliveryTruck() = 0;
};

#endif
