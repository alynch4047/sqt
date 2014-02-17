
/*
* CPP Wrapper for QDragMoveEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QDragMoveEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QDragMoveEvent_SMI: QDragMoveEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QDragMoveEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QDragMoveEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QRect* QDragMoveEvent_answerRect_SMIX4(QDragMoveEvent* self) {

	QRect retValue = self->answerRect();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" void QDragMoveEvent_accept_SMIX5(QDragMoveEvent* self) {

	self->accept();

}

extern "C" void QDragMoveEvent_ignore_SMIX6(QDragMoveEvent* self) {

	self->ignore();

}

extern "C" void QDragMoveEvent_accept_SMIX7(QDragMoveEvent* self, const QRect& r) {

	self->accept(r);

}

extern "C" void QDragMoveEvent_ignore_SMIX8(QDragMoveEvent* self, const QRect& r) {

	self->ignore(r);

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QDragMoveEvent_CPPObject(QDragMoveEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QDragMoveEvent_SMI_CPPObject(QDragMoveEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QDragMoveEvent
