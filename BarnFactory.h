#ifndef BARNFACTORY_H
#define BARNFACTORY_H
#include "FarmFactory.h"
#include "Barn.h"
class BarnFactory : public FarmFactory {


public:
	Farm* createBarn(std::string cropType, int capacity, int currentAmount);
};

#endif
