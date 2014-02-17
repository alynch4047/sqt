
/*
* CPP Wrapper for QShortcutEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QShortcutEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QShortcutEvent_SMI: QShortcutEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QShortcutEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QShortcutEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" bool QShortcutEvent_isAmbiguous_SMIX4(QShortcutEvent* self) {

	bool retValue = self->isAmbiguous();
	return retValue;

}

extern "C" int QShortcutEvent_shortcutId_SMIX6(QShortcutEvent* self) {

	int retValue = self->shortcutId();
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QShortcutEvent_CPPObject(QShortcutEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QShortcutEvent_SMI_CPPObject(QShortcutEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QShortcutEvent
