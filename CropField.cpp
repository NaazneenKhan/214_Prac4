#include "CropField.h"

CropField::CropField(std::string cropType, int capacity, std::string soilstate)
	: Farm(cropType, capacity), soilState(soilState){
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
	// will figure this out 
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

CropField::CropField()
{
}

void CropField::setSoil(SoilState* newsoilState) {
	this->soilState = newsoilState;
}
