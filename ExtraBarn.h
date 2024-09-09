#ifndef EXTRABARN_H
#define EXTRABARN_H
#include "Decorator.h"
class ExtraBarn : public Decorator {


public:
	int getLeftOverCapacity();

	void addExtraBarn();

	void harvest();

    virtual void setTotalCapacity(int newCapacity){};

	virtual int getTotalCapacity()override { return 0;} 

    virtual int getCurrentAmount() override { return 0;};

    virtual std::string getCropType() override { return cropType;};

};

#endif
