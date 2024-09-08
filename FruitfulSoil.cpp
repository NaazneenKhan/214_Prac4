#include "FruitfulSoil.h"
#include "FloodedSoil.h"

// FruitfulSoil::FruitfulSoil(std::string soilName){
// 	this->name = soilName;
// }

FruitfulSoil::FruitfulSoil()
{
}

void FruitfulSoil::harvestCrops(CropField *field)
{
    std::cout << "Harvesting crops. Yield is abundant (x3).\n";
}

void FruitfulSoil::rain(CropField* field) {
    std::cout << "Heavy rain! The soil is now flooded.\n";
    field->setSoil(new FloodedSoil());
}

std::string FruitfulSoil::getName() const {
    return "Fruitful Soil";
}
