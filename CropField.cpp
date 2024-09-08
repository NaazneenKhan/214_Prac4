#include "CropField.h"

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
	
	return this->soilState->getName();
	
}

int CropField::getTotalCapacity()
{
	// use iteratror to traverse composite structure to get all the capcities 
    return capacity;
}

Iterator *CropField::createIterator()
{
	//// naz
    return nullptr;
}

CropField::CropField()
{
}

void CropField::setSoil(SoilState* newsoilState) {
	this->soilState = newsoilState;
}
