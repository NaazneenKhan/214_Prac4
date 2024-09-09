#ifndef ITERATOR_H
#define ITERATOR_H

class Farm;


class Iterator {


public:
	virtual void firstFarm() = 0;

	virtual void next() = 0;

	virtual bool isDone() = 0;

	virtual Farm* currentFarm() = 0;
};

#endif
