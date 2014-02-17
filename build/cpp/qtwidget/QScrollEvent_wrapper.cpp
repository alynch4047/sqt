
/*
* CPP Wrapper for QScrollEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QScrollEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QScrollEvent_SMI: QScrollEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QScrollEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QScrollEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPointF* QScrollEvent_contentPos_SMIX5(QScrollEvent* self) {

	QPointF retValue = self->contentPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QScrollEvent_overshootDistance_SMIX6(QScrollEvent* self) {

	QPointF retValue = self->overshootDistance();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QScrollEvent_CPPObject(QScrollEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QScrollEvent_SMI_CPPObject(QScrollEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QScrollEvent
