#include "BarnFactory.h"

Farm* BarnFactory::createBarn() {

	Farm* newBarn = new Barn();
	return newBarn;
}
