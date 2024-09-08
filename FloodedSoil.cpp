#include "FloodedSoil.h"


// FloodedSoil::FloodedSoil(std::string soilName){
// 	this->name = soilName;
// }

FloodedSoil::FloodedSoil()
{
}

void FloodedSoil::harvestCrops(CropField *field)
{
    std::cout << "Harvesting is impossible! The field is flooded.\n";
}

void FloodedSoil::rain(CropField* field) {
    std::cout << "Further rain does nothing, the field is still flooded.\n";
}

std::string FloodedSoil::getName() const {
    return "Flooded Soil";
}
