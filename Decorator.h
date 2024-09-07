#ifndef DECORATOR_H
#define DECORATOR_H
#include "Farm.h"
class Decorator : public Farm {

public:
	Farm* farmLand;

	Decorator(Farm* farm);

public:
	Decorator();

	virtual void harvest() override  = 0;
};

#endif
