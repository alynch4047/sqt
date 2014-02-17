
/*
* CPP Wrapper for QIconDragEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QIconDragEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QIconDragEvent_SMI: QIconDragEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QIconDragEvent_SMI* SMIMake_QIconDragEvent() {
	QIconDragEvent_SMI* retVal = new QIconDragEvent_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QIconDragEvent_SMI(): QIconDragEvent() {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QIconDragEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QIconDragEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QIconDragEvent_SMI* QIconDragEvent_QIconDragEvent_SMIX2() {
	
	QIconDragEvent_SMI* obj = QIconDragEvent_SMI::SMIMake_QIconDragEvent();
	return obj;
}



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QIconDragEvent_CPPObject(QIconDragEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QIconDragEvent_SMI_CPPObject(QIconDragEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QIconDragEvent
