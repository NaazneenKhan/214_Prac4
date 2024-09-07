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

    void firstFarm()  ;

    void next()  ;

    bool isDone() const  ;

    Farm* currentFarm() const  ;
};

#endif // DEPTHFIRSTTRAVERSAL_H
