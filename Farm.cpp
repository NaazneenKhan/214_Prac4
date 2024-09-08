#include "Farm.h"

Farm::Farm(std::string cropType, int capacity)
    : cropType(cropType), capacity(capacity) {
}

void Farm::addObserver(Trucks *observer){
	trucks.push_back(observer);
}

void Farm::removeObserver(Trucks *observer)
{
	trucks.erase(std::remove(trucks.begin(), trucks.end(), observer), trucks.end());
}


void Farm::notifyObservers()
{
	for (Trucks* observer : trucks) {
        observer->update(this);
    }
}


Farm::~Farm()
{
}
