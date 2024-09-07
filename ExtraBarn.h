#ifndef EXTRABARN_H
#define EXTRABARN_H
#include "Decorator.h"
class ExtraBarn : public Decorator {


public:
	void getLeftOverCapacity();

	void addExtraBarn();

	void harvest();
};

#endif
