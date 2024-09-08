#include "Breadth-FirstTraversal.h"

BreadthFirstTraversal::BreadthFirstTraversal(const std::vector<Farm*>& farms) {
        for (Farm* farm : farms) {
            farmQueue.push(farm);  
        }
    }

    void BreadthFirstTraversal::firstFarm()  {
        // Already initialized in the constructor
    }

    void BreadthFirstTraversal::next()  {
        // if (!farmQueue.empty()) {
        //     farmQueue.pop();  
        // }

        if (!farmQueue.empty()) {
        Farm* currentFarm = farmQueue.front();

        //  FertiliserTruck if certain conditions are met
        if (currentFarm->getCropType() == "Corn") {
            FertiliserTruck* truck = new FertiliserTruck();
            truck->callTruck();  
            std::cout << "FertiliserTruck dispatched for Corn farm!" << std::endl;
        }

        //  DeliveryTruck - capacity 
        if (currentFarm->getTotalCapacity() > 200) {
            DeliveryTruck* truck = new DeliveryTruck();
            truck->callTruck();  
            std::cout << "DeliveryTruck dispatched for farm with large capacity!" << std::endl;
        }

      
        farmQueue.pop();
    }
    }

    bool BreadthFirstTraversal::isDone()   {
        return farmQueue.empty(); 
    }

    Farm* BreadthFirstTraversal::currentFarm()   {
        if (!isDone()) {
            return farmQueue.front(); 
        }
        return nullptr;
    }