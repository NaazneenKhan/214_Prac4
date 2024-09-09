#ifndef TRUCKS_H
#define TRUCKS_H

class Farm;

class Trucks {


public:
	virtual void update(Farm* farm) = 0; 

	virtual void startEngine() = 0;

	virtual void buyTruck() = 0;

	virtual void sellTruck() = 0;
};

#endif
