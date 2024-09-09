#include "Depth-FirstTraversal.h"

DepthFirstTraversal:: DepthFirstTraversal(const std::vector<Farm*>& farms) {
    for (Farm* farm : farms) {
        farmStack.push(farm);  
    }
}

void DepthFirstTraversal::firstFarm()  {
    
}

void DepthFirstTraversal::next() {
    if (!farmStack.empty()) {
        Farm* currentFarm = farmStack.top();

        if (currentFarm == nullptr) {
            std::cerr << "Error: currentFarm is null!" << std::endl;
            farmStack.pop(); // Pop and skip to avoid crashing
            return;
        }

        if (currentFarm->getCropType() == "Wheat") {
            FertiliserTruck* truck = new FertiliserTruck();
            truck->update(currentFarm);  
            std::cout << "FertiliserTruck dispatched for Wheat farm!" << std::endl;
        }

        if (currentFarm->getTotalCapacity() > 300) {
            DeliveryTruck* truck = new DeliveryTruck();
            truck->update(currentFarm);  
            std::cout << "DeliveryTruck dispatched for farm with large capacity!" << std::endl;
        }

        std::cout << "here 1\n";
        farmStack.pop();
        std::cout << "here 2\n";
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