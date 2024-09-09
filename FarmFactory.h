#ifndef FARMFACTORY_H
#define FARMFACTORY_H

#include "Farm.h"

class FarmFactory {
public:
    virtual ~FarmFactory() = default;

    // FarmFactory should now be focused on creating farm units, not trucks
    Farm* createFarm(const std::string& farmType, int numUnits);

// protected:
//     virtual Farm* createCropField(const std::string& cropType, int capacity, const std::string& soilState) = 0;
//     virtual Farm* createBarn(const std::string& cropType, int capacity, int currentAmount) = 0;
};

#endif // FARMFACTORY_H
