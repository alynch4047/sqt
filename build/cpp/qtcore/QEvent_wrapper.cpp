
/*
* CPP Wrapper for QEvent
*/

#include <instance_tracker.h>

#include <qcoreevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QEvent_SMI: QEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QEvent_SMI* SMIMake_QEvent(const QEvent& other) {
	QEvent_SMI* retVal = new QEvent_SMI(other);
	registerDInstance(retVal);
	return retVal;
};

private:
    QEvent_SMI(const QEvent& other): QEvent(other) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QEvent_SMI* QEvent_QEvent_SMIX5(const QEvent& other) {
	
	QEvent_SMI* obj = QEvent_SMI::SMIMake_QEvent(other);
	return obj;
}


extern "C" bool QEvent_spontaneous_SMIX8(QEvent* self) {

	bool retValue = self->spontaneous();
	return retValue;

}

extern "C" void QEvent_setAccepted_SMIX9(QEvent* self, bool accepted) {

	self->setAccepted(accepted);

}

extern "C" bool QEvent_isAccepted_SMIX10(QEvent* self) {

	bool retValue = self->isAccepted();
	return retValue;

}

extern "C" void QEvent_accept_SMIX11(QEvent* self) {

	self->accept();

}

extern "C" void QEvent_ignore_SMIX12(QEvent* self) {

	self->ignore();

}

extern "C" int QEvent_registerEventType_SMIX13(int hint) {

	int retValue = QEvent::registerEventType(hint);
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QEvent_CPPObject(QEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QEvent_SMI_CPPObject(QEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QEvent
