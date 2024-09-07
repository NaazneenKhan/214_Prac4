#include "DeliveryTruck.h"

void DeliveryTruck::callTruck() {
	std::cout << "DeliveryTruck has been dispatched to transport crops!" << std::endl;
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
