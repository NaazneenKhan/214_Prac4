#include "Barn.h"

Barn::Barn(std::string cropType, int capacity, int currentAmount)
    : Farm(cropType, capacity), currentAmount(currentAmount) {
}


int Barn::getTotalCapacity(){
    return capacity;
}

std::string Barn::getCropType(){
	return cropType ;
}

void Barn::addFarmUnit(Farm *farm){
}

void Barn::removeFarmUnit(Farm *farm){
}

int Barn::getCurrentAmount() {
	return currentAmount;
}

Iterator *Barn::createIterator(bool useBFS) //// not sure
{
	// std::vector<Farm*> farms;
    // farms.push_back(this);

	// if (useBFS) {
    //     return new BreadthFirstTraversal(farms);////
    // } else {
    //     return new DepthFirstTraversal(farms);
    // }

	return nullptr;
}



void Barn::setCurrentAmount(int amount) {
	currentAmount = amount;
	notifyObservers();
}

void Barn::harvest() {
    std::cout << "Harvesting from Barn: " << cropType << " with " << currentAmount << " units." << std::endl;

    // After harvesting, you might want to clear the barn or reduce the current amount.
    currentAmount = 0;
}

