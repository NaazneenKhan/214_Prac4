#ifndef FERTILISERTRUCK_H
#define FERTILISERTRUCK_H
#include "Trucks.h"
#include "SoilState.h"
#include "CropField.h"


class FertiliserTruck : public Trucks {

private:
	SoilState* soilState;
	CropField* farm;

public:
	void callTruck();

	void startEngine();

	void buyTruck();

	void sellTruck();
};

#endif
