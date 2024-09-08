#ifndef SOILSTATE_H
#define SOILSTATE_H

#include <iostream>
#include <string>


class CropField;

class SoilState {

protected:
	std::string name;

public:
    
	virtual void harvestCrops() = 0;

	virtual void rain() = 0;

	virtual void getName() = 0;
};

#endif
