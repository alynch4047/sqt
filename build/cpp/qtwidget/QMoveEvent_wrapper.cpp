
/*
* CPP Wrapper for QMoveEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QMoveEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QMoveEvent_SMI: QMoveEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QMoveEvent_SMI* SMIMake_QMoveEvent(const QPoint& pos, const QPoint& oldPos) {
	QMoveEvent_SMI* retVal = new QMoveEvent_SMI(pos, oldPos);
	registerDInstance(retVal);
	return retVal;
};

private:
    QMoveEvent_SMI(const QPoint& pos, const QPoint& oldPos): QMoveEvent(pos, oldPos) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QMoveEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QMoveEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QMoveEvent_SMI* QMoveEvent_QMoveEvent_SMIX2(const QPoint& pos, const QPoint& oldPos) {
	
	QMoveEvent_SMI* obj = QMoveEvent_SMI::SMIMake_QMoveEvent(pos, oldPos);
	return obj;
}


extern "C" const QPoint& QMoveEvent_pos_SMIX4(QMoveEvent* self) {

	const QPoint& retValue = const_cast<const QPoint&> (self->pos());
	return retValue;

}

extern "C" const QPoint& QMoveEvent_oldPos_SMIX5(QMoveEvent* self) {

	const QPoint& retValue = const_cast<const QPoint&> (self->oldPos());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QMoveEvent_CPPObject(QMoveEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QMoveEvent_SMI_CPPObject(QMoveEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QMoveEvent
