#include "FarmFactory.h"
#include "BarnFactory.h"
#include "CropFieldFactory.h"
#include "FertiliserTruckFactory.h"
#include "DeliveryTruckFactory.h"
#include "Farmer.h"
#include <iostream>

int main() {
    // Create a farmer
    Farmer john("John");

    // Create a farm using the farm factory
    FarmFactory farmFactory;
    Farm* johnsFarm = farmFactory.createFarm("MixedFarm", 4);  // 4 units: alternates barns and crop fields

    // Set the farm for the farmer
    john.setFarm(johnsFarm);

    // Add more barns and crop fields manually through the farmer
    john.createBarn("Barley", 1000, 500);
    john.createCropField("Wheat", 300, "Fruitful");

    // Purchase trucks
    john.createFertiliserTruck();
    john.createDeliveryTruck();

    // Simulate a harvest
    std::cout << "\nJohn starts harvesting all farm units:" << std::endl;
    john.harvestAll();

    // Notify trucks when storage is nearing its limit or fertilization is needed
    std::cout << "\nJohn notifies the trucks for action:" << std::endl;
    john.notifyTrucks();

    // Proper destruction test: As `john` goes out of scope, all units should be destructed properly
    std::cout << "\nExiting the program, farmer and farm will be destructed:" << std::endl;

    return 0;
}
