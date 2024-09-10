
// #include "Farmer.h"
// #include "FarmFactory.h"
// #include <iostream>

// int main() {
//     // Create a Farmer named "Naaz"
//     Farmer* naaz = new Farmer("Naaz");

//     // Create a farm through the FarmFactory
//     FarmFactory farmFactory;
//     Farm* naazFarm = farmFactory.createFarm("Mixed", 10);
//     naaz->setFarm(naazFarm); // Associate the farmer with the farm

//     // Create farm units and trucks through the Farmer
//     naaz->createBarn("Wheat", 500, 300);
//     naaz->createCropField("Corn", 200, "Dry");
//     naaz->createFertiliserTruck();
//     naaz->createDeliveryTruck();

//     // // Display farm details
//     // std::cout << "\n=== Farm Details ===" << std::endl;
//     // std::cout << "Farmer Name: " << naaz->getName() << std::endl;
//     // std::cout << "Farm Type: " << naazFarm->getFarmType() << std::endl;
//     // std::cout << "Farm Unit Count: " << naazFarm->getUnitCount() << std::endl;

//     // Simulate harvesting for all farm units
//     std::cout << "\n=== Harvest Simulation ===" << std::endl;
//     naaz->harvestAll();

//     // Notify trucks based on farm conditions
//     std::cout << "\n=== Truck Notification ===" << std::endl;
//     naaz->notifyTrucks();

//     // Additional checks: Get barn and crop field details
//     std::cout << "\n=== Barn Details ===" << std::endl;
//     std::cout << "Barn Crop Type: Wheat" << std::endl;
//     std::cout << "Barn Total Capacity: 500" << std::endl;
//     std::cout << "Barn Current Storage: 300" << std::endl;

//     std::cout << "\n=== Crop Field Details ===" << std::endl;
//     std::cout << "Crop Field Type: Corn" << std::endl;
//     std::cout << "Crop Field Capacity: 200" << std::endl;
//     std::cout << "Soil State: Dry" << std::endl;

//     // Clean up
//     delete naaz;
//     delete naazFarm;

//     return 0;
// }

// #include "Farmer.h"
// #include "FarmFactory.h"

// #include <iostream>

// int main() {
//     // Create a Farmer named "Naaz"
//     Farmer* naaz = new Farmer("Naaz");

//     // Create a farm through the FarmFactory
//     FarmFactory farmFactory;
//     Farm* naazFarm = farmFactory.createFarm("Mixed", 10);
//     naaz->setFarm(naazFarm); // Associate the farmer with the farm

//     // Create farm units and trucks through the Farmer
//     naaz->createBarn("Wheat", 500, 300);
//     naaz->createCropField("Corn", 200, "Dry");
//     naaz->createFertiliserTruck();
//     naaz->createDeliveryTruck();
    
//     // Simulate harvesting for all farm units
//     naaz->harvestAll();
//    // std::cout << "here 1\n";
//     // Notify trucks based on farm conditions
//     naaz->notifyTrucks();

//     // Clean up
//     delete naaz;
//     delete naazFarm;

//     return 0;


// }

#include <iostream>
#include <memory>
#include <vector>
#include "Farmer.h"
#include "FarmUnit.h"
#include "Barn.h"
#include "CropField.h"
#include "FloodedSoil.h"
#include "FruitfulSoil.h"
#include "DrySoil.h"
#include "FertiliserTruckFactory.h"
#include "DeliveryTruckFactory.h"
#include "CropFieldFactory.h"
#include "BarnFactory.h"
#include "ExtraBarn.h"
#include "Fertiliser.h"
#include "Depth-FirstTraversal.h"
#include "Breadth-FirstTraversal.h"

int main() {
    // Create a Farmer named "Naaz"
    auto naaz = std::make_unique<Farmer>("Naaz");

    // Create a farm through the FarmFactory
    FarmFactory farmFactory;
    auto naazFarm = std::unique_ptr<Farm>(farmFactory.createFarm("Mixed", 10));
    naaz->setFarm(naazFarm.get()); // Associate the farmer with the farm

    // Create farm units and trucks through the Farmer
    naaz->createBarn("Wheat", 500, 300);
    naaz->createCropField("Corn", 200, "Dry");
    naaz->createFertiliserTruck();
    naaz->createDeliveryTruck();

    // Simulate harvesting for all farm units
    naaz->harvestAll();

    // Notify trucks based on farm conditions
    naaz->notifyTrucks();

    //Test creating farm units and barns
    
    BarnFactory barnFactory;
    CropFieldFactory cropFieldFactory;

    // Use smart pointers for barn and crop field
    auto barn = std::unique_ptr<Farm>(barnFactory.createBarn("Wheat", 200, 150));
    auto cropField = std::unique_ptr<Farm>(cropFieldFactory.createCropField("Corn", 100, "Fruitful"));

    // Test Barn functionality
    std::cout << "Barn Crop Type: " << barn->getCropType() << std::endl;
    std::cout << "Barn Total Capacity: " << barn->getTotalCapacity() << std::endl;
    barn->setTotalCapacity(300);
    std::cout << "Barn Updated Capacity: " << barn->getTotalCapacity() << std::endl;
    
    // Test CropField functionality
    std::cout << "CropField Crop Type: " << cropField->getCropType() << std::endl;

    // Safely perform the dynamic cast with error handling
    if (auto* field = dynamic_cast<CropField*>(cropField.get())) {
        std::cout << "CropField Soil State: " << field->getSoilStateName() << std::endl;
    } else {
        std::cout << "Error: Failed to cast to CropField." << std::endl;
    }

    // Test FarmUnit
    FarmUnit farmUnit("MixedCrops", 500);
    farmUnit.addFarmUnit(barn.get());
    farmUnit.addFarmUnit(cropField.get());

    std::cout << "FarmUnit Total Capacity: " << farmUnit.getTotalCapacity() << std::endl;

    // Test SoilState and its subtypes
    auto soilField = std::make_unique<CropField>("Rice", 300, "Dry");
    auto drySoil = std::make_unique<DrySoil>();
    soilField->setSoil(drySoil.get());
    soilField->harvest();

    auto floodedSoil = std::make_unique<FloodedSoil>();
    soilField->setSoil(floodedSoil.get());
    soilField->harvest();

    //Test Breadth-First and Depth-First Traversal
    std::vector<Farm*> farms = {barn.get(), cropField.get()};
    
    BreadthFirstTraversal bfs(farms);
    while (!bfs.isDone()) {
        Farm* currentFarm = bfs.currentFarm();
        std::cout << "BFS Farm Crop Type: " << currentFarm->getCropType() << std::endl;
        bfs.next();
    }

    DepthFirstTraversal dfs(farms);
    while (!dfs.isDone()) {
        Farm* currentFarm = dfs.currentFarm();
        std::cout << "DFS Farm Crop Type: " << currentFarm->getCropType() << std::endl;
        dfs.next();
    }

    std::cout << "its the destructors\n";

    return 0; // No need for manual deletes
}


