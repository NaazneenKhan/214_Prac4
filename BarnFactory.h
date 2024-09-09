#ifndef BARNFACTORY_H
#define BARNFACTORY_H

#include "FarmFactory.h"
#include "Barn.h"

// BarnFactory is responsible for creating Barns
class BarnFactory : public FarmFactory {
public:
    
	Farm* createBarn(std::string cropType, int capacity, int currentAmount);

    
};

#endif // BARNFACTORY_H
