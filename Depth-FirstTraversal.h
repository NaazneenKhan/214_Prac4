#ifndef DEPTHFIRSTTRAVERSAL_H
#define DEPTHFIRSTTRAVERSAL_H

#include "Iterator.h"
#include "Farm.h"
#include "FertiliserTruck.h"
#include "DeliveryTruck.h"
#include <stack>

class DepthFirstTraversal : public Iterator {
private:
    std::stack<Farm*> farmStack;  

public:
    DepthFirstTraversal(const std::vector<Farm*>& farms) ;

    void firstFarm() override ;

    void next() override ;

    bool isDone() override  ;

    Farm* currentFarm() override  ;
};

#endif // DEPTHFIRSTTRAVERSAL_H
