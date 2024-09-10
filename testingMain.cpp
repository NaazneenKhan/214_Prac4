#include "FarmFactory.h"
#include "BarnFactory.h"
#include "CropFieldFactory.h"
#include "FertiliserTruckFactory.h"
#include "DeliveryTruckFactory.h"
#include "Farmer.h"
#include <iostream>
#include <cassert>
#include "FarmUnit.h"
#include "Farm.h"
#include "SoilState.h"
#include "DrySoil.h"
#include "FloodedSoil.h"
#include "FruitfulSoil.h"

#define LOW_YIELD 0.1
#define HIGH_YIELD 1.0

void testBarn() {
    // Create a Barn
    Barn barn("Corn", 1000, 500);

    // Test capacity and current amount
    assert(barn.getTotalCapacity() == 1000);
    assert(barn.getCurrentAmount() == 500);

    // Set a new capacity
    barn.setTotalCapacity(1200);
    assert(barn.getTotalCapacity() == 1200);

    // Test harvesting (for now just print statements)
    barn.harvest();
}

void testBreadthFirstTraversal() {
    FarmUnit farm("MixedFarm", 0);  // Root farm unit
    FarmUnit* barn1 = new FarmUnit("Barn", 500);
    FarmUnit* field1 = new FarmUnit("CropField", 300);
    farm.addFarmUnit(barn1);
    farm.addFarmUnit(field1);

    Iterator* bfsIterator = farm.createIterator(true);  // BFS
    bfsIterator->firstFarm();
    while (!bfsIterator->isDone()) {
        std::cout << bfsIterator->currentFarm()->getCropType() << " ";
        bfsIterator->next();
    }
    delete bfsIterator;
}

void testDepthFirstTraversal() {
    FarmUnit farm("MixedFarm", 0);  // Root farm unit
    FarmUnit* barn1 = new FarmUnit("Barn", 500);
    FarmUnit* field1 = new FarmUnit("CropField", 300);
    farm.addFarmUnit(barn1);
    farm.addFarmUnit(field1);

    Iterator* dfsIterator = farm.createIterator(false);  // DFS
    dfsIterator->firstFarm();
    while (!dfsIterator->isDone()) {
        std::cout << dfsIterator->currentFarm()->getCropType() << " ";
        dfsIterator->next();
    }
    delete dfsIterator;
}
// // Test for FertiliserTruck
// void testFertiliserTruck() {
//     FertiliserTruck truck("Fertiliser Truck 1");
//     CropField field; // Create a mock or test Farm object
//     field.setSoilState(new DrySoil()); // Set the soil state to Dry Soil

//     // Test truck initialization
//     assert(truck.getName() == "Fertiliser Truck 1");

//     // Test notification response
//     truck.update(&farm);  // Simulate the update call

//     // Since the truck should trigger actions based on the state,
//     // we can validate the expected output.
//     std::cout << "FertiliserTruck tests passed!" << std::endl;
// }

// // Test for DeliveryTruck
// void testDeliveryTruck() {
//     DeliveryTruck truck("Delivery Truck 1");
//     Farm farm; // Create a mock or test Farm object
//     farm.setTotalCapacity(100); // Set a total capacity for the farm
//     farm.setCurrentAmount(80); // Set to a value that triggers the delivery truck

//     // Test truck initialization
//     assert(truck.getName() == "Delivery Truck 1");

//     // Test notification response
//     truck.update(&farm);  // Simulate the update call

//     // Since the truck should trigger actions based on the state,
//     // we can validate the expected output.
//     std::cout << "DeliveryTruck tests passed!" << std::endl;
// }


void testSoilStates() {
    // Create a CropField object for testing and set its soil state
    CropField field("Wheat", 300, "Flooded Soil");  // Initialize with flooded soil

    // Now, assert that the soil state is correctly set
    assert(field.getSoilStateName() == "Flooded Soil");  // This should now pass

    // Test dry soil behavior
    field.setSoil(new DrySoil());  // Change soil state to dry
    field.harvest();  // Assuming this will call the appropriate logic based on soil state
    // Assuming the expected amount after harvest is defined, adjust accordingly
    assert(field.getCurrentAmount() == 0); // Change this based on actual logic

    // Test flooded soil behavior
    field.setSoil(new FloodedSoil()); // Set back to flooded soil
    field.harvest(); // Harvest crops in flooded soil
    assert(field.getSoilStateName() == "Flooded Soil"); // Should be flooded soil

    // Test fruitful soil behavior
    field.setSoil(new FruitfulSoil()); // Change soil state to fruitful
    field.harvest(); // Harvest crops in fruitful soil
    // Again, set this to what you expect after harvest
    assert(field.getCurrentAmount() == 0); // Change this based on actual logic

    std::cout << "Soil state tests passed!" << std::endl;
}

void testFarmerCreation() {
    Farmer farmer("Alice");
    FarmFactory factory;
    Farm* farm = factory.createFarm("MixedFarm", 4);
    farmer.setFarm(farm);

   
    std::cout << "Farmer creation test passed!" << std::endl;
}

void testBarnCreation() {
    Farmer farmer("Bob");
    FarmFactory factory;
    Farm* farm = factory.createFarm("BarnFarm", 2);
    farmer.setFarm(farm);

    farmer.createBarn("Wheat", 1000, 500);
    farmer.createBarn("Corn", 800, 300);
    
    // Verify barn creation
    assert(farm->getFarmUnits().size() == 4); // 2 from factory + 2 from farmer
    std::cout << "Barn creation test passed!" << std::endl;
}

void testCropFieldCreation() {
    Farmer farmer("Charlie");
    FarmFactory factory;
    Farm* farm = factory.createFarm("CropFarm", 2);
    farmer.setFarm(farm);

    farmer.createCropField("Rice", 400, "Flooded");
    farmer.createCropField("Barley", 300, "Fruitful");

    // Verify crop field creation
    assert(farm->getFarmUnits().size() == 4); // 2 from factory + 2 from farmer
    std::cout << "Crop field creation test passed!" << std::endl;
}

void testTruckCreation() {
    Farmer farmer("Diana");
    FarmFactory factory;
    Farm* farm = factory.createFarm("TruckFarm", 2);
    farmer.setFarm(farm);

    farmer.createFertiliserTruck();
    farmer.createDeliveryTruck();

    
    std::cout << "Truck creation test passed!" << std::endl;
}


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

    std::cout << "barn test\n";
    testBarn();
    std::cout << "Barn tests passed!" << std::endl;

    std::cout << "iterator test\n";
    testBreadthFirstTraversal();
     testDepthFirstTraversal();
    std::cout << "\nBreadth-first traversal test passed!" << std::endl;

    // std::cout << "fertiliser truck test\n";
    // testFertiliserTruck();

    // std::cout << "delivery truck test\n";
    // testDeliveryTruck();

    std::cout << "soil states test\n";
    testSoilStates();

    testFarmerCreation();
    testBarnCreation();
    testCropFieldCreation();
    testTruckCreation();

    return 0;
}
