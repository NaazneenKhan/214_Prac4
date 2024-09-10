#include "DrySoil.h"
#include "FruitfulSoil.h"

// DrySoil::DrySoil(std::string soilName){
// 	this->name = soilName;
// }

DrySoil::DrySoil()
{
}

void DrySoil::harvestCrops(CropField *field)
{
    std::cout << "Harvesting crops. Yield is minimal (x1).\n";
}

void DrySoil::rain(CropField* field) {
    std::cout << "Rain! The soil is now fruitful.\n";
    field->setSoil(new FruitfulSoil());
}

std::string DrySoil::getName() const {
    return "Dry Soil";
}

DrySoil::~DrySoil()
{
     std::cout << "Destroying DrySoil" << std::endl;
}
