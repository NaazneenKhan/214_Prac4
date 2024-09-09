#include "Farmer.h"

Farmer::Farmer(const std::string &name)
    : name(name), farm(nullptr) {
}

// Set the farm the farmer owns
void Farmer::setFarm(Farm* farm) {
    this->farm = farm;
    std::cout << name << " now owns a farm." << std::endl;
}

void Farmer::createBarn(const std::string &cropType, int capacity, int currentAmount)
{
    if (farm == nullptr) {
        std::cerr << "Farmer doesn't have a farm yet!" << std::endl;
        return;
    }

    BarnFactory barnFactory;
    Farm* barn = barnFactory.createBarn(cropType, capacity, currentAmount);
    farm->addFarmUnit(barn);
    std::cout << name << " created a Barn for " << cropType << std::endl;
}

void Farmer::createCropField(const std::string &cropType, int capacity, const std::string &soilState)
{
    if (farm == nullptr) {
        std::cerr << "Farmer doesn't have a farm yet!" << std::endl;
        return;
    }

    CropFieldFactory cropFieldFactory;
    Farm* cropField = cropFieldFactory.createCropField(cropType, capacity, soilState);
    farm->addFarmUnit(cropField);
    std::cout << name << " created a CropField for " << cropType << std::endl;
}

void Farmer::createFertiliserTruck()
{
    FertiliserTruckFactory fertiliserTruckFactory;
    Trucks* truck = fertiliserTruckFactory.createFertiliserTruck();
    farm->addObserver(truck);
    std::cout << name << " bought a FertiliserTruck." << std::endl;
}

void Farmer::createDeliveryTruck() {
    DeliveryTruckFactory deliveryTruckFactory;
    Trucks* truck = deliveryTruckFactory.createDeliveryTruck();
    farm->addObserver(truck);
    std::cout << name << " bought a DeliveryTruck." << std::endl;
}

void Farmer::harvestAll() {
    if (farm == nullptr) {
        std::cerr << "Farmer doesn't have a farm yet!" << std::endl;
        return;
    }

    for (Farm* unit : farm->getFarmUnits()) {
        unit->harvest();
    }
}

void Farmer::notifyTrucks() {
    if (farm == nullptr) {
        std::cerr << "Farmer doesn't have a farm yet!" << std::endl;
        return;
    }

    farm->notifyObservers();
}
