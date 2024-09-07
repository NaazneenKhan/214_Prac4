#include "BarnFactory.h"
using namespace std;
#include <iostream>

Farm* BarnFactory::createBarn(std::string cropType, int capacity, int currentAmount) {

	Farm* newBarn = new Barn(cropType, capacity, currentAmount);
	return newBarn;
}
