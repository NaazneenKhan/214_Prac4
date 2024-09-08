#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H
#include "SoilState.h"

class FloodedSoil : public SoilState {


public:
    //FloodedSoil (std::string soilName);

	FloodedSoil();

	void harvestCrops(CropField* field);

	void rain(CropField* field);

	std::string getName() const;
};

#endif
