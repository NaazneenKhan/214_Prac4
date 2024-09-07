#include "FertiliserTruck.h"

void FertiliserTruck::callTruck() {
	std::cout << "FertiliserTruck has been dispatched to deliver fertiliser!" << std::endl;
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
