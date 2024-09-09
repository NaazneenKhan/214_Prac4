#include "DeliveryTruckFactory.h"

Trucks* DeliveryTruckFactory::createDeliveryTruck() {
	return new DeliveryTruck();
}
