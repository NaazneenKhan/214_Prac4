#ifndef CROPFIELD_H
#define CROPFIELD_H

class CropField : Farm {

public:
	SoilState* soilState;

	std::string getCropType();

	std::string getSoilStateName();

public:
	CropField();

	void setSoil(SoilState soilState);
};

#endif
