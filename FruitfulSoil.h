#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H
#include "SoilState.h"

class FruitfulSoil : public SoilState {


public:
	void harvestCrops();

	void rain();

	void getName();
};

#endif
