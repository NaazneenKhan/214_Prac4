#include "Fertiliser.h"
#include "CropField.h"

void Fertiliser::increaseProduction() {
	std::cout << "Production of crops increased!" << std::endl;
}

void Fertiliser::addFertiliser() {
	std::cout << "Fertiliser added!" << std::endl;
}

void Fertiliser::harvest() {  //////
	// farmLand->harvest();

    
    // if (soilState->getName() == "Dry") {
    //     addFertiliser();  
    //     increaseProduction();  
    //     std::cout << "Fertiliser applied to dry soil!" << std::endl;
    // }

	farmLand->harvest();

   
    CropField* cropField = dynamic_cast<CropField*>(farmLand);
    if (cropField) {
       
        SoilState* soilState = cropField->getSoilState();

        
        if (soilState && soilState->getName() == "Dry") {
            addFertiliser();  
            increaseProduction();  
            std::cout << "Fertiliser applied to dry soil!" << std::endl;
        }
    } else {
        std::cout << "Error: farmLand is not a CropField!" << std::endl;
    }

}
