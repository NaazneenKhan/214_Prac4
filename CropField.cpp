#include "CropField.h"
#include "DrySoil.h"
#include "FruitfulSoil.h"
#include "FloodedSoil.h"


CropField::CropField(std::string cropType, int capacity, std::string soilName)
	: Farm(cropType, capacity){

		if(soilName == "Dry Soil"){
			this->soilState = new DrySoil();
		} else 
		if(soilName == "Fruitful Soil"){
			this->soilState = new FruitfulSoil();
		} else 
		if(soilName == "Flooded Soil"){
			this->soilState = new FloodedSoil();
		} else {
			this->soilState = new DrySoil();
		}


}


std::string CropField::getCropType()
{
    return cropType;
}

void CropField::addFarmUnit(Farm *farm)
{
}

void CropField::removeFarmUnit(Farm *farm)
{
}

std::string CropField::getSoilStateName() {
	
	return soilState->getName();
	
}

int CropField::getTotalCapacity()
{
	// use iteratror to traverse composite structure to get all the capcities 
    return capacity;
}

Iterator *CropField::createIterator(bool useBFS) ///// not sure
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



CropField::CropField() : Farm("", 0), soilState(nullptr) {
  
}

void CropField::harvest() {
	if(soilState != nullptr){
		
		std::cout << "Harvesting CropField: " << cropType << " with soil state: " << soilState->getName() << std::endl;
		
		// Adjust crop yield based on the soil state
	
		if (soilState->getName() == "Fruitful") {
			std::cout << "Great yield from the CropField!" << std::endl;
		} else if (soilState->getName() == "Dry") {
			std::cout << "Poor yield due to dry soil." << std::endl;
		} else if (soilState->getName() == "Flooded") {
			std::cout << "Yield reduced due to flooding." << std::endl;
		}
	} else {
		std::cout << "Poor yield due to dry soil." << std::endl;
	}
}


void CropField::setSoil(SoilState* newSoilState) {
    if (this->soilState != nullptr) {
        delete this->soilState;  
    }
    this->soilState = newSoilState;
	notifyObservers();
}

CropField::~CropField()
{
	std::cout << "Destroying CropField with soil: " << soilState->getName() << std::endl;

    if (soilState) {
        delete soilState;
        soilState = nullptr;  // Nullify to prevent double deletion
    }

}
