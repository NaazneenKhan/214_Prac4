#ifndef DECORATOR_H
#define DECORATOR_H

class Decorator : Farm {

public:
	Farm* farmLand;

	Decorator(Farm* farm);

public:
	Decorator();

	virtual void harvest() = 0;
};

#endif
