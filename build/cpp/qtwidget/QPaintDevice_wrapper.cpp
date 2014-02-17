
/*
* CPP Wrapper for QPaintDevice
*/

#include <instance_tracker.h>

#include <qpaintdevice.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QPaintDevice_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QPaintDevice_SMI: QPaintDevice {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QPaintDevice_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QPaintDevice_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" int QPaintDevice_width_SMIX5(QPaintDevice* self) {

	int retValue = self->width();
	return retValue;

}

extern "C" int QPaintDevice_height_SMIX6(QPaintDevice* self) {

	int retValue = self->height();
	return retValue;

}

extern "C" int QPaintDevice_widthMM_SMIX7(QPaintDevice* self) {

	int retValue = self->widthMM();
	return retValue;

}

extern "C" int QPaintDevice_heightMM_SMIX8(QPaintDevice* self) {

	int retValue = self->heightMM();
	return retValue;

}

extern "C" int QPaintDevice_logicalDpiX_SMIX9(QPaintDevice* self) {

	int retValue = self->logicalDpiX();
	return retValue;

}

extern "C" int QPaintDevice_logicalDpiY_SMIX10(QPaintDevice* self) {

	int retValue = self->logicalDpiY();
	return retValue;

}

extern "C" int QPaintDevice_physicalDpiX_SMIX11(QPaintDevice* self) {

	int retValue = self->physicalDpiX();
	return retValue;

}

extern "C" int QPaintDevice_physicalDpiY_SMIX12(QPaintDevice* self) {

	int retValue = self->physicalDpiY();
	return retValue;

}

extern "C" int QPaintDevice_depth_SMIX13(QPaintDevice* self) {

	int retValue = self->depth();
	return retValue;

}

extern "C" bool QPaintDevice_paintingActive_SMIX14(QPaintDevice* self) {

	bool retValue = self->paintingActive();
	return retValue;

}

extern "C" int QPaintDevice_colorCount_SMIX15(QPaintDevice* self) {

	int retValue = self->colorCount();
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QPaintDevice_CPPObject(QPaintDevice* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QPaintDevice_SMI_CPPObject(QPaintDevice_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QPaintDevice
