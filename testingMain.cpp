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

//     // Notify trucks based on farm conditions
//     naaz->notifyTrucks();

//     // Clean up
//     delete naaz;
//     delete naazFarm;

//     return 0;


// }

#include <iostream>
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
    // Test creating farm units and barns
    BarnFactory barnFactory;
    CropFieldFactory cropFieldFactory;

    Farm* barn = barnFactory.createBarn("Wheat", 200, 150);
    Farm* cropField = cropFieldFactory.createCropField("Corn", 100, "Fruitful");

    // Test Barn functionality
    std::cout << "Barn Crop Type: " << barn->getCropType() << std::endl;
    std::cout << "Barn Total Capacity: " << barn->getTotalCapacity() << std::endl;
    barn->setTotalCapacity(300);
    std::cout << "Barn Updated Capacity: " << barn->getTotalCapacity() << std::endl;
    
    // Test CropField functionality
    std::cout << "CropField Crop Type: " << cropField->getCropType() << std::endl;
    std::cout << "CropField Soil State: " << dynamic_cast<CropField*>(cropField)->getSoilStateName() << std::endl;

    // Test FarmUnit
    FarmUnit farmUnit("MixedCrops", 500);
    farmUnit.addFarmUnit(barn);
    farmUnit.addFarmUnit(cropField);

    std::cout << "FarmUnit Total Capacity: " << farmUnit.getTotalCapacity() << std::endl;


    // decorator
    ExtraBarn decco1 =  ExtraBarn();
    Fertiliser decco2 =  Fertiliser();

    // Test ExtraBarn decorator
    decco1.addExtraBarn();
    decco2.addFertiliser();
 

    // Test Fertiliser decorator
    

    // Test SoilState and its subtypes
    CropField* soilField = new CropField("Rice", 300, "Dry");
    SoilState* drySoil = new DrySoil();
    soilField->setSoil(drySoil);
    soilField->harvest();

    SoilState* floodedSoil = new FloodedSoil();
    soilField->setSoil(floodedSoil);
    soilField->harvest();

    // Test Breadth-First and Depth-First Traversal
    std::vector<Farm*> farms = {barn, cropField};
    
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

    // Test Factory methods
    FertiliserTruckFactory fertTruckFactory;
    DeliveryTruckFactory deliveryTruckFactory;

    Trucks* fertTruck = fertTruckFactory.createFertiliserTruck();
    fertTruck->startEngine();
    fertTruck->buyTruck();
    fertTruck->sellTruck();

    Trucks* deliveryTruck = deliveryTruckFactory.createDeliveryTruck();
    deliveryTruck->startEngine();
    deliveryTruck->buyTruck();
    deliveryTruck->sellTruck();

    // Clean up
    delete barn;
    delete cropField;
    delete soilField;
    delete fertTruck;
    delete deliveryTruck;

    return 0;
}


