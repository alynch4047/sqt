
/*
* CPP Wrapper for TouchPoint
*/

#include <instance_tracker.h>

#include <qevent.h>

// Headers for converters


// Externs for converters
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_TouchPoint_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QTouchEvent_TouchPoint_SMI: QTouchEvent::TouchPoint {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QTouchEvent_TouchPoint_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_TouchPoint_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" int QTouchEvent_TouchPoint_id_SMIX2(QTouchEvent::TouchPoint* self) {

	int retValue = self->id();
	return retValue;

}

extern "C" int QTouchEvent_TouchPoint_state_SMIX3(QTouchEvent::TouchPoint* self)  {

	Qt::TouchPointState retValue = self->state();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_pos_SMIX4(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->pos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_startPos_SMIX5(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->startPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_lastPos_SMIX6(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->lastPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_scenePos_SMIX7(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->scenePos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_startScenePos_SMIX8(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->startScenePos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_lastScenePos_SMIX9(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->lastScenePos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_screenPos_SMIX10(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->screenPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_startScreenPos_SMIX11(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->startScreenPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_lastScreenPos_SMIX12(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->lastScreenPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_normalizedPos_SMIX13(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->normalizedPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_startNormalizedPos_SMIX14(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->startNormalizedPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QTouchEvent_TouchPoint_lastNormalizedPos_SMIX15(QTouchEvent::TouchPoint* self) {

	QPointF retValue = self->lastNormalizedPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QRectF* QTouchEvent_TouchPoint_rect_SMIX16(QTouchEvent::TouchPoint* self) {

	QRectF retValue = self->rect();
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" QRectF* QTouchEvent_TouchPoint_sceneRect_SMIX17(QTouchEvent::TouchPoint* self) {

	QRectF retValue = self->sceneRect();
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" QRectF* QTouchEvent_TouchPoint_screenRect_SMIX18(QTouchEvent::TouchPoint* self) {

	QRectF retValue = self->screenRect();
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QTouchEvent_TouchPoint_CPPObject(QTouchEvent::TouchPoint* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QTouchEvent_QTouchEvent_TouchPoint_SMI_CPPObject(QTouchEvent_TouchPoint_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for TouchPoint
