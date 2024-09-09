#include "Fertiliser.h"
#include "CropField.h"

void Fertiliser::increaseProduction() {
	std::cout << "Production of crops increased!" << std::endl;
}

void Fertiliser::addFertiliser() {
	std::cout << "Fertiliser added!" << std::endl;
}

void Fertiliser::harvest() {
    // First, call the original harvest on the wrapped farm unit
    farmLand->harvest();

    // Additional behavior: add fertiliser to improve production if soil is dry
    CropField* cropField = dynamic_cast<CropField*>(farmLand);
    if (cropField && cropField->getSoilState()->getName() == "Dry") {
        addFertiliser();
        increaseProduction();
        std::cout << "Fertiliser applied during harvest!" << std::endl;
    }
}



