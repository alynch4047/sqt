
/*
* CPP Wrapper for QTimerEvent
*/

#include <instance_tracker.h>

#include <qcoreevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QTimerEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QTimerEvent_SMI: QTimerEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QTimerEvent_SMI* SMIMake_QTimerEvent(int timerId) {
	QTimerEvent_SMI* retVal = new QTimerEvent_SMI(timerId);
	registerDInstance(retVal);
	return retVal;
};

private:
    QTimerEvent_SMI(int timerId): QTimerEvent(timerId) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QTimerEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QTimerEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QTimerEvent_SMI* QTimerEvent_QTimerEvent_SMIX2(int timerId) {
	
	QTimerEvent_SMI* obj = QTimerEvent_SMI::SMIMake_QTimerEvent(timerId);
	return obj;
}


extern "C" int QTimerEvent_timerId_SMIX4(QTimerEvent* self) {

	int retValue = self->timerId();
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QTimerEvent_CPPObject(QTimerEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QTimerEvent_SMI_CPPObject(QTimerEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QTimerEvent
