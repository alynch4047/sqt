
/*
* CPP Wrapper for QActionEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QActionEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QActionEvent_SMI: QActionEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QActionEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QActionEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QActionEvent_CPPObject(QActionEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QActionEvent_SMI_CPPObject(QActionEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QActionEvent
