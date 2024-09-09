#include "Depth-FirstTraversal.h"

DepthFirstTraversal:: DepthFirstTraversal(const std::vector<Farm*>& farms) {
        for (Farm* farm : farms) {
            farmStack.push(farm);  
        }
    }

    void DepthFirstTraversal::firstFarm()  {
        
    }

    void DepthFirstTraversal::next()  {
        // if (!farmStack.empty()) {
        //     farmStack.pop(); 
        // }

        if (!farmStack.empty()) {
        Farm* currentFarm = farmStack.top();

        //  FertiliserTruck if certain conditions are met
        if (currentFarm->getCropType() == "Wheat") {
            FertiliserTruck* truck = new FertiliserTruck();
            truck->update(currentFarm);  
            std::cout << "FertiliserTruck dispatched for Wheat farm!" << std::endl;
        }

        //  DeliveryTruck- capacity
        if (currentFarm->getTotalCapacity() > 300) {
            DeliveryTruck* truck = new DeliveryTruck();
            truck->update(currentFarm);  
            std::cout << "DeliveryTruck dispatched for farm with large capacity!" << std::endl;
        }

        
        farmStack.pop();
    }
    }

    bool DepthFirstTraversal::isDone()   {
        return farmStack.empty();  
    }

    Farm* DepthFirstTraversal::currentFarm()   {
        if (!isDone()) {
            return farmStack.top();  
        }
        return nullptr;
    }