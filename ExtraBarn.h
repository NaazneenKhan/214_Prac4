#ifndef EXTRABARN_H
#define EXTRABARN_H
#include "Decorator.h"
class ExtraBarn : public Decorator {


public:
	int getLeftOverCapacity();

	void addExtraBarn();

	void harvest();
};

#endif
