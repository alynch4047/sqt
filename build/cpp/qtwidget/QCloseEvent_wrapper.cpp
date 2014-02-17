
/*
* CPP Wrapper for QCloseEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QCloseEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QCloseEvent_SMI: QCloseEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QCloseEvent_SMI* SMIMake_QCloseEvent() {
	QCloseEvent_SMI* retVal = new QCloseEvent_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QCloseEvent_SMI(): QCloseEvent() {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QCloseEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QCloseEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QCloseEvent_SMI* QCloseEvent_QCloseEvent_SMIX2() {
	
	QCloseEvent_SMI* obj = QCloseEvent_SMI::SMIMake_QCloseEvent();
	return obj;
}



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QCloseEvent_CPPObject(QCloseEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QCloseEvent_SMI_CPPObject(QCloseEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QCloseEvent
