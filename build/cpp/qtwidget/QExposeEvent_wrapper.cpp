
/*
* CPP Wrapper for QExposeEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QExposeEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QExposeEvent_SMI: QExposeEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QExposeEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QExposeEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QExposeEvent_CPPObject(QExposeEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QExposeEvent_SMI_CPPObject(QExposeEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QExposeEvent
