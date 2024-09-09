#ifndef FERTILISERTRUCK_H
#define FERTILISERTRUCK_H
#include "Trucks.h"
#include "SoilState.h"
#include "CropField.h"

class CropField;
class SoilState;


class FertiliserTruck : public Trucks {

private:
	SoilState* soilState;
	CropField* cropField;

public:
    FertiliserTruck() : soilState(nullptr), cropField(nullptr) {}

    void update(Farm* farm);

	void startEngine()  ;

	void buyTruck() ;

	void sellTruck() ;

	virtual ~FertiliserTruck(){}
};

#endif
