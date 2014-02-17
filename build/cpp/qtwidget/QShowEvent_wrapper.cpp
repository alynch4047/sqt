
/*
* CPP Wrapper for QShowEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QShowEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QShowEvent_SMI: QShowEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QShowEvent_SMI* SMIMake_QShowEvent() {
	QShowEvent_SMI* retVal = new QShowEvent_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QShowEvent_SMI(): QShowEvent() {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QShowEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QShowEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QShowEvent_SMI* QShowEvent_QShowEvent_SMIX2() {
	
	QShowEvent_SMI* obj = QShowEvent_SMI::SMIMake_QShowEvent();
	return obj;
}



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QShowEvent_CPPObject(QShowEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QShowEvent_SMI_CPPObject(QShowEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QShowEvent
