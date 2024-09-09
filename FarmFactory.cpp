#include "FarmFactory.h"
#include "BarnFactory.h"
#include "CropFieldFactory.h"
#include "FertiliserTruckFactory.h"
#include "DeliveryTruckFactory.h"
#include "Farm.h"
#include "FarmUnit.h"

Farm* FarmFactory::createFarm(const std::string& farmType, int numUnits) {
    // Create a concrete farm (assuming you have a subclass like `ConcreteFarm`)
    Farm* farm = new FarmUnit(farmType, numUnits); // Example capacity, can be parameterized

    // Use the number of units to decide what to create
    for (int i = 0; i < numUnits; ++i) {
        if (i % 2 == 0) {
            // Add a barn every other unit
            BarnFactory barnFactory;
            Farm* barn = barnFactory.createBarn("Wheat", 500, 300);
            farm->addFarmUnit(barn);
        } else {
            // Add a crop field for alternating units
            CropFieldFactory cropFieldFactory;
            Farm* cropField = cropFieldFactory.createCropField("Corn", 200, "Dry");
            farm->addFarmUnit(cropField);
        }
    }

    // Add trucks to the farm
    FertiliserTruckFactory fertiliserTruckFactory;
    Trucks* fertiliserTruck = fertiliserTruckFactory.createFertiliserTruck();
    farm->addObserver(fertiliserTruck);

    DeliveryTruckFactory deliveryTruckFactory;
    Trucks* deliveryTruck = deliveryTruckFactory.createDeliveryTruck();
    farm->addObserver(deliveryTruck);

    std::cout << "Farm of type " << farmType << " with " << numUnits << " units created." << std::endl;

    return farm;
}
