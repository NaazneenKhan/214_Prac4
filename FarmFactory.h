#ifndef FARMFACTORY_H
#define FARMFACTORY_H

class FarmFactory {

private:
	Farm* farm;

protected:
	virtual void createCropField() = 0;

	virtual void createBarn() = 0;
};

#endif
