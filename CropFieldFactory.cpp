#include "CropFieldFactory.h"

// Create a CropField object with given crop type, capacity, and soil state
Farm* CropFieldFactory::createCropField(std::string cropType, int capacity, std::string soilstate) {
    return new CropField(cropType, capacity, soilstate);
}


