#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H
#include "Trucks.h"
#include "Barn.h"
class DeliveryTruck : public Trucks {

private:
	int currentAmount;
	Barn* farm;

public:
	void callTruck();

	void startEngine();

	void buyTruck();

	void sellTruck();
};

#endif
