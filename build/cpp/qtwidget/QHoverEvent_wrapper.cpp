
/*
* CPP Wrapper for QHoverEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QHoverEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QHoverEvent_SMI: QHoverEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QHoverEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QHoverEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPoint* QHoverEvent_pos_SMIX4(QHoverEvent* self) {

	QPoint retValue = self->pos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QHoverEvent_oldPos_SMIX5(QHoverEvent* self) {

	QPoint retValue = self->oldPos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" const QPointF& QHoverEvent_posF_SMIX6(QHoverEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->posF());
	return retValue;

}

extern "C" const QPointF& QHoverEvent_oldPosF_SMIX7(QHoverEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->oldPosF());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QHoverEvent_CPPObject(QHoverEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QHoverEvent_SMI_CPPObject(QHoverEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QHoverEvent
