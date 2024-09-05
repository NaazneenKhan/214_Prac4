#ifndef FERTILISERTRUCK_H
#define FERTILISERTRUCK_H

class FertiliserTruck : Trucks {

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
