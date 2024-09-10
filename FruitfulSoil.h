#ifndef FRUITFULSOIL_H
#define FRUITFULSOIL_H

#include "SoilState.h"
#include "CropField.h"

#include <string>

class FruitfulSoil : public SoilState {


public:
    //FruitfulSoil(std::string );

	FruitfulSoil();

	void harvestCrops(CropField* field) ;

    void rain(CropField* field) ;

    std::string getName() const ;

    ~FruitfulSoil() = default;
};

#endif
