
/*
* CPP Wrapper for QPaintEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QPaintEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QPaintEvent_SMI: QPaintEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QPaintEvent_SMI* SMIMake_QPaintEvent(const QRect& paintRect) {
	QPaintEvent_SMI* retVal = new QPaintEvent_SMI(paintRect);
	registerDInstance(retVal);
	return retVal;
};

private:
    QPaintEvent_SMI(const QRect& paintRect): QPaintEvent(paintRect) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QPaintEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QPaintEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPaintEvent_SMI* QPaintEvent_QPaintEvent_SMIX3(const QRect& paintRect) {
	
	QPaintEvent_SMI* obj = QPaintEvent_SMI::SMIMake_QPaintEvent(paintRect);
	return obj;
}


extern "C" const QRect& QPaintEvent_rect_SMIX5(QPaintEvent* self) {

	const QRect& retValue = const_cast<const QRect&> (self->rect());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QPaintEvent_CPPObject(QPaintEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QPaintEvent_SMI_CPPObject(QPaintEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QPaintEvent
