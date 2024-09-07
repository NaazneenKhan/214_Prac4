#include "FertiliserTruckFactory.h"

Trucks* FertiliserTruckFactory::createFertiliserTruck() {
	Trucks* newFertiliserTruck = new FertiliserTruck();
	return newFertiliserTruck;
	
}
