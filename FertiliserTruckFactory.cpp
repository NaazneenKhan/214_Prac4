#include "FertiliserTruckFactory.h"

Trucks* FertiliserTruckFactory::createFertiliserTruck() {
	return new FertiliserTruck();
	
}
