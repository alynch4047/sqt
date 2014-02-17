
/*
* CPP Wrapper for QInputEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QInputEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QInputEvent_SMI: QInputEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QInputEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QInputEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QInputEvent_CPPObject(QInputEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QInputEvent_SMI_CPPObject(QInputEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QInputEvent
