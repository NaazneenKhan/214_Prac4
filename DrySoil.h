#ifndef DRYSOIL_H
#define DRYSOIL_H
#include "SoilState.h"
class DrySoil : public SoilState {


public:
	void harvestCrops();

	void rain();

	void getName();
};

#endif
