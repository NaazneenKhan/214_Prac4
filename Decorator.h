#ifndef DECORATOR_H
#define DECORATOR_H
#include "Farm.h"
class Decorator : public Farm {

public:
	Farm* farmLand;
	Decorator(Farm* farm);

	Decorator();

	virtual void harvest(){}

	
    virtual void setTotalCapacity(int newCapacity){};

	virtual int getTotalCapacity()override { return 0;} 


    virtual int getCurrentAmount() override { return 0;};

    virtual std::string getCropType() override { return cropType;};

	virtual ~Decorator(){};
};

#endif
