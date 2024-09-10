#include "Farm.h"
#include <algorithm> 

Farm::Farm(std::string cropType, int capacity)
    : cropType(cropType), capacity(capacity) {
}

Farm::Farm()
{
}

void Farm::addFarmUnit(Farm* farm) {
    farmUnits.push_back(farm);
}

void Farm::removeFarmUnit(Farm* farm) {
    farmUnits.erase(std::remove(farmUnits.begin(), farmUnits.end(), farm), farmUnits.end());
}

std::vector<Farm*>& Farm::getFarmUnits() {
    return farmUnits;
}

void Farm::addObserver(Trucks* observer) {
    trucks.push_back(observer);
}

void Farm::removeObserver(Trucks* observer) {
    trucks.erase(std::remove(trucks.begin(), trucks.end(), observer), trucks.end());
}

void Farm::notifyObservers() {
	//std::cout <<"Farm observer\n";
    for (Trucks* observer : trucks) {
		//std::cout <<"Farm observer - is it null\n";
		if(observer != nullptr){
			observer->update(this);
		}
    }
}

Farm::~Farm() {
    // Delete farm units
    for (Farm* unit : farmUnits) {
        delete unit;
    }
    farmUnits.clear(); // Not strictly necessary, but helps to avoid dangling pointers

    // Delete observers (trucks)
    for (Trucks* truck : trucks) {
        delete truck;
    }
    trucks.clear(); // Also optional, but ensures safety.
}
