#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H

class DeliveryTruck : Trucks {

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
