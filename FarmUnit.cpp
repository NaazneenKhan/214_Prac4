#include "FarmUnit.h"
#include <algorithm> 

FarmUnit::FarmUnit(std::string cropType, int capacity): Farm(cropType, capacity){

}


int FarmUnit::getTotalCapacity() {
	// use iteratror to traverse composite structure to get all the capcities 

    int totalCapacity = 0;
    for (Farm* farm : farmLand) {
        totalCapacity += farm->getTotalCapacity();
    }
    return totalCapacity;
}

void FarmUnit::setTotalCapacity(int newCapacity)
{ 
	this->capacity = newCapacity;
}

int FarmUnit::getCurrentAmount()
{
    int currentAmount = 0;

    for (Farm* farm : farmLand) {
        // Check if the farm unit is a Barn
        Barn* barn = dynamic_cast<Barn*>(farm);
        if (barn != nullptr) {
            // Add the current amount from the Barn
            currentAmount += barn->getCurrentAmount();
        }
    }

    return currentAmount;
}

std::string FarmUnit::getCropType() {
    std::string cropTypes;
    for (Farm* farm : farmLand) {
        cropTypes += farm->getCropType() + " ";
    }
    return cropTypes;
}

void FarmUnit::harvest() {
    std::cout << "Harvesting farm unit: " << cropType << std::endl;
    
    // Call harvest on all farm units contained within this FarmUnit
    for (Farm* farm : farmLand) {
        farm->harvest();
    }
}


void FarmUnit::addFarmUnit(Farm* farm) {
    farmLand.push_back(farm);
}

void FarmUnit::removeFarmUnit(Farm* farm) {
    farmLand.erase(std::remove(farmLand.begin(), farmLand.end(), farm), farmLand.end());
}

Iterator* FarmUnit:: createIterator(bool useBFS) {
    std::vector<Farm*> farms;

    
    for (Farm* farm : farmLand) {
        farms.push_back(farm);  
    }

    if (useBFS) {
        return new BreadthFirstTraversal(farms);
    } else {
        return new DepthFirstTraversal(farms);
    }
}

