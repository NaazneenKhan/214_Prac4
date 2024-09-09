#include "DeliveryTruck.h"

void DeliveryTruck::update(Farm* farm){
	std::cout << "feteliser Truck 1\n";
	if (farm->getCurrentAmount() >= farm->getTotalCapacity() * 0.8) {
		std::cout << "Delivery Truck dispatched to collect crops.\n";
		startEngine();
	}
}


void DeliveryTruck::startEngine() {
	std::cout << "DeliveryTruck engine started." << std::endl;
}

void DeliveryTruck::buyTruck() {
	std::cout << "DeliveryTruck has been purchased." << std::endl;
}

void DeliveryTruck::sellTruck() {
	std::cout << "DeliveryTruck has been sold." << std::endl;
}
