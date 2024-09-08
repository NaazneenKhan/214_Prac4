#include "FarmUnit.h"

FarmUnit::FarmUnit(){

}

int FarmUnit::getTotalCapacity() {
	// use iteratror to traverse composite structure to get all the capcities 

    int totalCapacity = 0;
    for (Farm* farm : farmLand) {
        totalCapacity += farm->getTotalCapacity();
    }
    return totalCapacity;
}

std::string FarmUnit::getCropType() {
    std::string cropTypes;
    for (Farm* farm : farmLand) {
        cropTypes += farm->getCropType() + " ";
    }
    return cropTypes;
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

