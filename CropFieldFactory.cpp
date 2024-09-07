#include "CropFieldFactory.h"

Farm* CropFieldFactory::createCropField(std::string cropType, int capacity, SoilState* soilstate) { // change in other classes 
	Farm* newCropField = new CropField(cropType, capacity, soilstate);
	return newCropField;

	// return new CropField();
}
