#ifndef FERTILISERTRUCKFACTORY_H
#define FERTILISERTRUCKFACTORY_H

#include "FarmFactory.h"
#include "FertiliserTruck.h"

class FertiliserTruckFactory {
public:
    // Only implement the relevant truck creation
    Trucks* createFertiliserTruck(); // No need to override FarmFactory
};

#endif // FERTILISERTRUCKFACTORY_H
