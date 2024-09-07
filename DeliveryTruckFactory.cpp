#include "DeliveryTruckFactory.h"

Trucks* DeliveryTruckFactory::createDeliveryTruck() {
	Trucks* newDeliveryTruck = new DeliveryTruck();
	return newDeliveryTruck;
}
