#ifndef FERTILISER_H
#define FERTILISER_H
#include "Decorator.h"

class Fertiliser : public Decorator {


public:
	void increaseProduction();

	void addFertiliser();

	void harvest();

    virtual void setTotalCapacity(int newCapacity){};

	virtual int getTotalCapacity()override { return 0;} 

    virtual int getCurrentAmount() override { return 0;};

    virtual std::string getCropType() override { return cropType;};

	~Fertiliser() = default;
};

#endif
