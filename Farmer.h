#ifndef FARMER_H
#define FARMER_H

#include <string>
#include "FarmFactory.h"
#include "BarnFactory.h"
#include "CropFieldFactory.h"
#include "FertiliserTruckFactory.h"
#include "DeliveryTruckFactory.h"
#include <iostream>

class Farmer {
private:
    std::string name;
    Farm* farm; // Aggregation: Farmer has a Farm

public:
    Farmer(const std::string& name);

    // Set the farm the farmer owns
    void setFarm(Farm* farm);

    void createBarn(const std::string& cropType, int capacity, int currentAmount);
    void createCropField(const std::string& cropType, int capacity, const std::string& soilState);
    void createFertiliserTruck();
    void createDeliveryTruck();
    void harvestAll();
    void notifyTrucks();

	virtual ~Farmer();
};

#endif // FARMER_H
