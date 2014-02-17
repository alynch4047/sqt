
/*
* CPP Wrapper for QDragLeaveEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QDragLeaveEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QDragLeaveEvent_SMI: QDragLeaveEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QDragLeaveEvent_SMI* SMIMake_QDragLeaveEvent() {
	QDragLeaveEvent_SMI* retVal = new QDragLeaveEvent_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QDragLeaveEvent_SMI(): QDragLeaveEvent() {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QDragLeaveEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QDragLeaveEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QDragLeaveEvent_SMI* QDragLeaveEvent_QDragLeaveEvent_SMIX2() {
	
	QDragLeaveEvent_SMI* obj = QDragLeaveEvent_SMI::SMIMake_QDragLeaveEvent();
	return obj;
}



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QDragLeaveEvent_CPPObject(QDragLeaveEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QDragLeaveEvent_SMI_CPPObject(QDragLeaveEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QDragLeaveEvent
