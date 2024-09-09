#include "BarnFactory.h"

Farm *BarnFactory::createBarn(std::string cropType, int capacity, int currentAmount)
{
    return new Barn(cropType, capacity, currentAmount);
}


