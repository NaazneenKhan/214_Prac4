#ifndef BREADTHFIRSTTRAVERSAL_H
#define BREADTHFIRSTTRAVERSAL_H

#include "Iterator.h"
#include "Farm.h"
#include "FertiliserTruck.h"
#include "DeliveryTruck.h"

#include <queue>

class BreadthFirstTraversal : public Iterator {
private:
    std::queue<Farm*> farmQueue;  

public:
    BreadthFirstTraversal(const std::vector<Farm*>& farms) ;

    void firstFarm()  ;

    void next()  ;

    bool isDone() const  ;
    
    Farm* currentFarm() const ;
};

#endif // BREADTHFIRSTTRAVERSAL_H
