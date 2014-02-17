
/*
* CPP Wrapper for QFocusEvent
*/

#include <instance_tracker.h>

#include <qevent.h>

// Headers for converters


// Externs for converters
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QFocusEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QFocusEvent_SMI: QFocusEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QFocusEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QFocusEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" bool QFocusEvent_gotFocus_SMIX4(QFocusEvent* self) {

	bool retValue = self->gotFocus();
	return retValue;

}

extern "C" bool QFocusEvent_lostFocus_SMIX5(QFocusEvent* self) {

	bool retValue = self->lostFocus();
	return retValue;

}

extern "C" int QFocusEvent_reason_SMIX6(QFocusEvent* self)  {

	Qt::FocusReason retValue = self->reason();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QFocusEvent_CPPObject(QFocusEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QFocusEvent_SMI_CPPObject(QFocusEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QFocusEvent
