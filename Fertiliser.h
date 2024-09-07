#ifndef FERTILISER_H
#define FERTILISER_H
#include "Decorator.h"

class Fertiliser : public Decorator {


public:
	void increaseProduction();

	void addFertiliser();

	void harvest();
};

#endif
