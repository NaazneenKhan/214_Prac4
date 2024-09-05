#ifndef TRUCKS_H
#define TRUCKS_H

class Trucks {


public:
	virtual void callTruck() = 0;

	virtual void startEngine() = 0;

	virtual void buyTruck() = 0;

	virtual void sellTruck() = 0;
};

#endif
