#ifndef DECORATOR_H
#define DECORATOR_H
#include "Farm.h"
class Decorator : public Farm {

public:
	Farm* farmLand;
	Decorator(Farm* farm);

	Decorator();

	virtual void harvest(){}

	virtual int getTotalCapacity(){} ;
    virtual void setTotalCapacity(int newCapacity){};

    virtual int getCurrentAmount() {};

    virtual std::string getCropType() {};
};

#endif
