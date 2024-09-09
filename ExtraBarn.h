#ifndef EXTRABARN_H
#define EXTRABARN_H
#include "Decorator.h"
class ExtraBarn : public Decorator {


public:
	int getLeftOverCapacity();

	void addExtraBarn();

	void harvest();

	virtual int getTotalCapacity(){} ;
    virtual void setTotalCapacity(int newCapacity){};

    virtual int getCurrentAmount() {};

    virtual std::string getCropType() {};
};

#endif
