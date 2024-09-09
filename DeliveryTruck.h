#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H
#include "Trucks.h"
#include "Barn.h"

class Barn;

class DeliveryTruck : public Trucks {

private:
	int currentAmount;
	Barn* barn;

public:
    DeliveryTruck(){};

    void update(Farm* farm) override;

	void startEngine();

	void buyTruck();

	void sellTruck();

	virtual ~DeliveryTruck() {}
};

#endif
