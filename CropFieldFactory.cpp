#include "CropFieldFactory.h"

Farm* CropFieldFactory::createCropField() {
	Farm* newCropField = new CropField();
	return newCropField;

	// return new CropField();
}
