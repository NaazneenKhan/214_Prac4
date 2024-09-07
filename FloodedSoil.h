#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H
#include "SoilState.h"

class FloodedSoil : public SoilState {


public:
	void harvestCrops();

	void rain();

	void getName();
};

#endif
