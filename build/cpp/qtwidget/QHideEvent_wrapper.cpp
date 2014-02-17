
/*
* CPP Wrapper for QHideEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QHideEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QHideEvent_SMI: QHideEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QHideEvent_SMI* SMIMake_QHideEvent() {
	QHideEvent_SMI* retVal = new QHideEvent_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QHideEvent_SMI(): QHideEvent() {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QHideEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QHideEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QHideEvent_SMI* QHideEvent_QHideEvent_SMIX2() {
	
	QHideEvent_SMI* obj = QHideEvent_SMI::SMIMake_QHideEvent();
	return obj;
}



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QHideEvent_CPPObject(QHideEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QHideEvent_SMI_CPPObject(QHideEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QHideEvent
