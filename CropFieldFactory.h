#ifndef CROPFIELDFACTORY_H
#define CROPFIELDFACTORY_H

#include "FarmFactory.h"
#include "CropField.h"

// CropFieldFactory is responsible for creating CropFields
class CropFieldFactory : public FarmFactory {
public:
    // Create a CropField object with the specified crop type, capacity, and soil state
    Farm* createCropField(std::string cropType, int capacity, std::string soilstate); //override;

};

#endif // CROPFIELDFACTORY_H
