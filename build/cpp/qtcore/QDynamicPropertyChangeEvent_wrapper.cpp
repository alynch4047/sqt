
/*
* CPP Wrapper for QDynamicPropertyChangeEvent
*/

#include <instance_tracker.h>

#include <qcoreevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QDynamicPropertyChangeEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QDynamicPropertyChangeEvent_SMI: QDynamicPropertyChangeEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QDynamicPropertyChangeEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QDynamicPropertyChangeEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QDynamicPropertyChangeEvent_CPPObject(QDynamicPropertyChangeEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QDynamicPropertyChangeEvent_SMI_CPPObject(QDynamicPropertyChangeEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QDynamicPropertyChangeEvent
