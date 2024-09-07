#ifndef FERTILISERTRUCKFACTORY_H
#define FERTILISERTRUCKFACTORY_H
#include "FarmFactory.h"
#include "FertiliserTruck.h"

class FertiliserTruckFactory : public FarmFactory {


public:
	Trucks* createFertiliserTruck();
};

#endif
