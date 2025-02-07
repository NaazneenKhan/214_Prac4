#include "FertiliserTruck.h"


void FertiliserTruck::update(Farm *farm)
{ 
	std::cout << "feteliser Truck 1\n";
    if (farm->getSoilStateName() == "Dry Soil") {
		std::cout << "Fertilizer Truck dispatched to fertilize the field.\n";
		startEngine();
	}
}

void FertiliserTruck::startEngine() {
	std::cout << "FertiliserTruck engine started." << std::endl;
}

void FertiliserTruck::buyTruck() {
	std::cout << "FertiliserTruck has been purchased." << std::endl;
}

void FertiliserTruck::sellTruck() {
	std::cout << "FertiliserTruck has been sold." << std::endl;
}
