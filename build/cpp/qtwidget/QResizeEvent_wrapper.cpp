
/*
* CPP Wrapper for QResizeEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QResizeEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QResizeEvent_SMI: QResizeEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QResizeEvent_SMI* SMIMake_QResizeEvent(const QSize& size, const QSize& oldSize) {
	QResizeEvent_SMI* retVal = new QResizeEvent_SMI(size, oldSize);
	registerDInstance(retVal);
	return retVal;
};

private:
    QResizeEvent_SMI(const QSize& size, const QSize& oldSize): QResizeEvent(size, oldSize) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QResizeEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QResizeEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QResizeEvent_SMI* QResizeEvent_QResizeEvent_SMIX2(const QSize& size, const QSize& oldSize) {
	
	QResizeEvent_SMI* obj = QResizeEvent_SMI::SMIMake_QResizeEvent(size, oldSize);
	return obj;
}


extern "C" const QSize& QResizeEvent_size_SMIX4(QResizeEvent* self) {

	const QSize& retValue = const_cast<const QSize&> (self->size());
	return retValue;

}

extern "C" const QSize& QResizeEvent_oldSize_SMIX5(QResizeEvent* self) {

	const QSize& retValue = const_cast<const QSize&> (self->oldSize());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QResizeEvent_CPPObject(QResizeEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QResizeEvent_SMI_CPPObject(QResizeEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QResizeEvent
