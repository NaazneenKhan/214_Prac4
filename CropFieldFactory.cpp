#include "CropFieldFactory.h"

Farm* CropFieldFactory::createCropField(std::string cropType, int capacity, std::string soilstate) { // change in other classes 
	Farm* newCropField = new CropField(cropType, capacity, soilstate);
	return newCropField;

	// return new CropField();
}
