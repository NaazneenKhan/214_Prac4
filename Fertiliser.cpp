#include "Fertiliser.h"

void Fertiliser::increaseProduction() {
	std::cout << "Production of crops increased!" << std::endl;
}

void Fertiliser::addFertiliser() {
	std::cout << "Fertiliser added!" << std::endl;
}

void Fertiliser::harvest() {  //////
	// if statement to check if soil is dry, then harvest
	// added function to base class (Farm)
	farmLand->harvest();

}
