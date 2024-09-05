#ifndef ITERATOR_H
#define ITERATOR_H

class Iterator {


public:
	virtual void firstFarm() = 0;

	virtual void next() = 0;

	virtual void isDone() = 0;

	virtual void currentFarm() = 0;
};

#endif
