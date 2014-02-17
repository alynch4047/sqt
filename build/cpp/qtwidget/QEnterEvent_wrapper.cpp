
/*
* CPP Wrapper for QEnterEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QEnterEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QEnterEvent_SMI: QEnterEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QEnterEvent_SMI* SMIMake_QEnterEvent(const QPointF& localPos, const QPointF& windowPos, const QPointF& screenPos) {
	QEnterEvent_SMI* retVal = new QEnterEvent_SMI(localPos, windowPos, screenPos);
	registerDInstance(retVal);
	return retVal;
};

private:
    QEnterEvent_SMI(const QPointF& localPos, const QPointF& windowPos, const QPointF& screenPos): QEnterEvent(localPos, windowPos, screenPos) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QEnterEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QEnterEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QEnterEvent_SMI* QEnterEvent_QEnterEvent_SMIX2(const QPointF& localPos, const QPointF& windowPos, const QPointF& screenPos) {
	
	QEnterEvent_SMI* obj = QEnterEvent_SMI::SMIMake_QEnterEvent(localPos, windowPos, screenPos);
	return obj;
}


extern "C" QPoint* QEnterEvent_pos_SMIX4(QEnterEvent* self) {

	QPoint retValue = self->pos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QEnterEvent_globalPos_SMIX5(QEnterEvent* self) {

	QPoint retValue = self->globalPos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" int QEnterEvent_x_SMIX6(QEnterEvent* self) {

	int retValue = self->x();
	return retValue;

}

extern "C" int QEnterEvent_y_SMIX7(QEnterEvent* self) {

	int retValue = self->y();
	return retValue;

}

extern "C" int QEnterEvent_globalX_SMIX8(QEnterEvent* self) {

	int retValue = self->globalX();
	return retValue;

}

extern "C" int QEnterEvent_globalY_SMIX9(QEnterEvent* self) {

	int retValue = self->globalY();
	return retValue;

}

extern "C" const QPointF& QEnterEvent_localPos_SMIX10(QEnterEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->localPos());
	return retValue;

}

extern "C" const QPointF& QEnterEvent_windowPos_SMIX11(QEnterEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->windowPos());
	return retValue;

}

extern "C" const QPointF& QEnterEvent_screenPos_SMIX12(QEnterEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->screenPos());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QEnterEvent_CPPObject(QEnterEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QEnterEvent_SMI_CPPObject(QEnterEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QEnterEvent
