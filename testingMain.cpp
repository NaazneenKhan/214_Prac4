#include "Farmer.h"
#include "FarmFactory.h"

#include <iostream>

int main() {
    // Create a Farmer named "Naaz"
    Farmer* naaz = new Farmer("Naaz");

    // Create a farm through the FarmFactory
    FarmFactory farmFactory;
    Farm* naazFarm = farmFactory.createFarm("Mixed", 10);
    naaz->setFarm(naazFarm); // Associate the farmer with the farm

    // Create farm units and trucks through the Farmer
    naaz->createBarn("Wheat", 500, 300);
    naaz->createCropField("Corn", 200, "Dry");
    naaz->createFertiliserTruck();
    naaz->createDeliveryTruck();

    // Simulate harvesting for all farm units
    naaz->harvestAll();

    // Notify trucks based on farm conditions
    naaz->notifyTrucks();

    // Clean up
    delete naaz;
    delete naazFarm;

    return 0;
}
