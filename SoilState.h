#ifndef SOILSTATE_H
#define SOILSTATE_H

#include <iostream>
#include <string>


class CropField;

class SoilState {

// protected:
// 	std::string name;

public:
    
	virtual void harvestCrops(CropField* field) = 0;

	virtual void rain(CropField* field) = 0;

	virtual std::string getName() const = 0; 

    virtual ~SoilState() = default;  
};

#endif
