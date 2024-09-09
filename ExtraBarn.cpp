#include "ExtraBarn.h"
// #include "Barn.h"

int ExtraBarn::getLeftOverCapacity() {
	int leftOverCapacity = farmLand->getTotalCapacity() - farmLand->getCurrentAmount();
    std::cout << "Leftover capacity: " << leftOverCapacity << std::endl;
    return leftOverCapacity;
}

void ExtraBarn::addExtraBarn() {
	int newCapacity = farmLand->getTotalCapacity() + 100;  
    farmLand->setTotalCapacity(newCapacity);
    std::cout << "Extra barn added! New total capacity: " << newCapacity << std::endl;

}

void ExtraBarn::harvest() {
    // First, call the original harvest on the wrapped farm unit
    farmLand->harvest();

    // Additional behavior: increase barn capacity before harvest
    addExtraBarn();
    std::cout << "Harvesting from a barn with extra capacity!" << std::endl;
}
