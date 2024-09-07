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
            truck->callTruck();  
            std::cout << "FertiliserTruck dispatched for Wheat farm!" << std::endl;
        }

        //  DeliveryTruck- capacity
        if (currentFarm->getTotalCapacity() > 300) {
            DeliveryTruck* truck = new DeliveryTruck();
            truck->callTruck();  
            std::cout << "DeliveryTruck dispatched for farm with large capacity!" << std::endl;
        }

        
        farmStack.pop();
    }
    }

    bool DepthFirstTraversal::isDone() const  {
        return farmStack.empty();  
    }

    Farm* DepthFirstTraversal::currentFarm() const  {
        if (!isDone()) {
            return farmStack.top();  
        }
        return nullptr;
    }