#ifndef DELIVERYTRUCKFACTORY_H
#define DELIVERYTRUCKFACTORY_H

#include "FarmFactory.h"
#include "DeliveryTruck.h"

class DeliveryTruckFactory {
public:
    // Only implement the relevant truck creation
    Trucks* createDeliveryTruck(); // No need to override FarmFactory
};

#endif // DELIVERYTRUCKFACTORY_H
