#include "Farm.h"

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
    for (Trucks* observer : trucks) {
        observer->update(this);
    }
}

Farm::~Farm() {
}
