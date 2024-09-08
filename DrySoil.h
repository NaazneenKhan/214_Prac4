#ifndef DRYSOIL_H
#define DRYSOIL_H

#include "SoilState.h"
#include "CropField.h"


class DrySoil : public SoilState {

public:
   // DrySoil(std::string soilName);

   DrySoil();

	void harvestCrops(CropField* field) ;

	void rain(CropField* field) ;

	std::string  getName() const ;
};

#endif
