#ifndef FARMFACTORY_H
#define FARMFACTORY_H

#include "Farm.h"

class FarmFactory {

private:
	Farm* farm;

protected:
	virtual Farm* createCropField() = 0;

	virtual void createBarn() = 0;
};

#endif
