#ifndef CROPFIELDFACTORY_H
#define CROPFIELDFACTORY_H
#include "FarmFactory.h"
#include "CropField.h"
class CropFieldFactory : public FarmFactory {


public:
	Farm* createCropField();
};

#endif
