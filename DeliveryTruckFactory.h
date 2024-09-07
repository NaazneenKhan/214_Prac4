#ifndef DELIVERYTRUCKFACTORY_H
#define DELIVERYTRUCKFACTORY_H
#include "FarmFactory.h"
#include "DeliveryTruck.h"
class DeliveryTruckFactory : public FarmFactory {


public:
	Trucks* createDeliveryTruck();
};

#endif
