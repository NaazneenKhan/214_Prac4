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
	farmLand->harvest();  
    std::cout << "Harvesting from barn with extra capacity!" << std::endl;
}
