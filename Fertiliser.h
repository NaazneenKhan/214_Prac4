#ifndef FERTILISER_H
#define FERTILISER_H
#include "Decorator.h"

class Fertiliser : public Decorator {


public:
	void increaseProduction();

	void addFertiliser();

	void harvest();

	virtual int getTotalCapacity(){} ;
    virtual void setTotalCapacity(int newCapacity){};

    virtual int getCurrentAmount() {};

    virtual std::string getCropType() {};
};

#endif
