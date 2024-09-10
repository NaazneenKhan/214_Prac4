#ifndef FARM_H
#define FARM_H
#include <iostream>
#include <vector>
#include <string>
#include "Trucks.h"
#include "Iterator.h"
#include "SoilState.h"

class Farm {
protected:
    std::string cropType;
    int capacity;
    std::vector<Farm*> farmUnits;
    std::vector<Trucks*> trucks;

public:
    Farm(std::string cropType, int capacity);

    Farm(); // Default constructor in case of decorators

    virtual void harvest() = 0;

    virtual int getTotalCapacity() = 0;

    virtual void setTotalCapacity(int newCapacity) = 0;

    virtual int getCurrentAmount() = 0;

    virtual std::string getCropType() = 0;

	virtual std::string getSoilStateName() =0;

    void addFarmUnit(Farm* farm);

    void removeFarmUnit(Farm* farm);

    std::vector<Farm*>& getFarmUnits(); // Return farm units for traversal

    void addObserver(Trucks* observer);

    void removeObserver(Trucks* observer);
	
    void notifyObservers();

    virtual ~Farm();
};

#endif // FARM_H
