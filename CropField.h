#ifndef CROPFIELD_H
#define CROPFIELD_H
#include "Farm.h"
#include "SoilState.h"
#include <iostream>
using namespace std;

class CropField : public Farm {

public:
	SoilState* soilState;

	std::string getCropType();

	std::string getSoilStateName();

public:
	CropField();

	void setSoil(SoilState* soilState);
};

#endif
