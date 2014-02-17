
/*
* CPP Wrapper for QTabletEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QTabletEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QTabletEvent_SMI: QTabletEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QTabletEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QTabletEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPoint* QTabletEvent_pos_SMIX6(QTabletEvent* self) {

	QPoint retValue = self->pos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QTabletEvent_globalPos_SMIX7(QTabletEvent* self) {

	QPoint retValue = self->globalPos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" int QTabletEvent_x_SMIX8(QTabletEvent* self) {

	int retValue = self->x();
	return retValue;

}

extern "C" int QTabletEvent_y_SMIX9(QTabletEvent* self) {

	int retValue = self->y();
	return retValue;

}

extern "C" int QTabletEvent_globalX_SMIX10(QTabletEvent* self) {

	int retValue = self->globalX();
	return retValue;

}

extern "C" int QTabletEvent_globalY_SMIX11(QTabletEvent* self) {

	int retValue = self->globalY();
	return retValue;

}

extern "C" int QTabletEvent_z_SMIX18(QTabletEvent* self) {

	int retValue = self->z();
	return retValue;

}

extern "C" int QTabletEvent_xTilt_SMIX21(QTabletEvent* self) {

	int retValue = self->xTilt();
	return retValue;

}

extern "C" int QTabletEvent_yTilt_SMIX22(QTabletEvent* self) {

	int retValue = self->yTilt();
	return retValue;

}

extern "C" const QPointF& QTabletEvent_posF_SMIX23(QTabletEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->posF());
	return retValue;

}

extern "C" const QPointF& QTabletEvent_globalPosF_SMIX24(QTabletEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->globalPosF());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QTabletEvent_CPPObject(QTabletEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QTabletEvent_SMI_CPPObject(QTabletEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QTabletEvent
