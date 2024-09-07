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

Iterator *Barn::createIterator()
{
	//// naaaz to iterator 
    return nullptr;
}



void Barn::setCurrentAmount(int amount) {
	currentAmount = amount;
}
