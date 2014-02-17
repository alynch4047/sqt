
/*
* CPP Wrapper for QMouseEvent
*/

#include <instance_tracker.h>

#include <qevent.h>

// Headers for converters


// Externs for converters
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QMouseEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QMouseEvent_SMI: QMouseEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QMouseEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QMouseEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPoint* QMouseEvent_pos_SMIX6(QMouseEvent* self) {

	QPoint retValue = self->pos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QMouseEvent_globalPos_SMIX7(QMouseEvent* self) {

	QPoint retValue = self->globalPos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" int QMouseEvent_x_SMIX8(QMouseEvent* self) {

	int retValue = self->x();
	return retValue;

}

extern "C" int QMouseEvent_y_SMIX9(QMouseEvent* self) {

	int retValue = self->y();
	return retValue;

}

extern "C" int QMouseEvent_globalX_SMIX10(QMouseEvent* self) {

	int retValue = self->globalX();
	return retValue;

}

extern "C" int QMouseEvent_globalY_SMIX11(QMouseEvent* self) {

	int retValue = self->globalY();
	return retValue;

}

extern "C" int QMouseEvent_button_SMIX12(QMouseEvent* self)  {

	Qt::MouseButton retValue = self->button();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" const QPointF& QMouseEvent_localPos_SMIX14(QMouseEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->localPos());
	return retValue;

}

extern "C" const QPointF& QMouseEvent_windowPos_SMIX15(QMouseEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->windowPos());
	return retValue;

}

extern "C" const QPointF& QMouseEvent_screenPos_SMIX16(QMouseEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->screenPos());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QMouseEvent_CPPObject(QMouseEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QMouseEvent_SMI_CPPObject(QMouseEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QMouseEvent
