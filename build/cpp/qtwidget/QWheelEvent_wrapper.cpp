
/*
* CPP Wrapper for QWheelEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QWheelEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QWheelEvent_SMI: QWheelEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QWheelEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QWheelEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPoint* QWheelEvent_pos_SMIX4(QWheelEvent* self) {

	QPoint retValue = self->pos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QWheelEvent_globalPos_SMIX5(QWheelEvent* self) {

	QPoint retValue = self->globalPos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" int QWheelEvent_x_SMIX6(QWheelEvent* self) {

	int retValue = self->x();
	return retValue;

}

extern "C" int QWheelEvent_y_SMIX7(QWheelEvent* self) {

	int retValue = self->y();
	return retValue;

}

extern "C" int QWheelEvent_globalX_SMIX8(QWheelEvent* self) {

	int retValue = self->globalX();
	return retValue;

}

extern "C" int QWheelEvent_globalY_SMIX9(QWheelEvent* self) {

	int retValue = self->globalY();
	return retValue;

}

extern "C" QPoint* QWheelEvent_pixelDelta_SMIX11(QWheelEvent* self) {

	QPoint retValue = self->pixelDelta();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QWheelEvent_angleDelta_SMIX12(QWheelEvent* self) {

	QPoint retValue = self->angleDelta();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" const QPointF& QWheelEvent_posF_SMIX13(QWheelEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->posF());
	return retValue;

}

extern "C" const QPointF& QWheelEvent_globalPosF_SMIX14(QWheelEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->globalPosF());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QWheelEvent_CPPObject(QWheelEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QWheelEvent_SMI_CPPObject(QWheelEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QWheelEvent
