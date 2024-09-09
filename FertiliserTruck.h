#ifndef FERTILISERTRUCK_H
#define FERTILISERTRUCK_H
#include "Trucks.h"
#include "SoilState.h"
#include "CropField.h"


class FertiliserTruck : public Trucks {

private:
	SoilState* soilState;
	CropField* cropField;

public:
    FertiliserTruck(){};

    void update(Farm* farm) override;

	void startEngine();

	void buyTruck();

	void sellTruck();

	virtual ~FertiliserTruck() {}
};

#endif
