
/*
* CPP Wrapper for QScrollPrepareEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QScrollPrepareEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QScrollPrepareEvent_SMI: QScrollPrepareEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QScrollPrepareEvent_SMI* SMIMake_QScrollPrepareEvent(const QPointF& startPos) {
	QScrollPrepareEvent_SMI* retVal = new QScrollPrepareEvent_SMI(startPos);
	registerDInstance(retVal);
	return retVal;
};

private:
    QScrollPrepareEvent_SMI(const QPointF& startPos): QScrollPrepareEvent(startPos) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QScrollPrepareEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QScrollPrepareEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QScrollPrepareEvent_SMI* QScrollPrepareEvent_QScrollPrepareEvent_SMIX2(const QPointF& startPos) {
	
	QScrollPrepareEvent_SMI* obj = QScrollPrepareEvent_SMI::SMIMake_QScrollPrepareEvent(startPos);
	return obj;
}


extern "C" QPointF* QScrollPrepareEvent_startPos_SMIX4(QScrollPrepareEvent* self) {

	QPointF retValue = self->startPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QSizeF* QScrollPrepareEvent_viewportSize_SMIX5(QScrollPrepareEvent* self) {

	QSizeF retValue = self->viewportSize();
	QSizeF* copiedRetValue = new QSizeF(retValue);
	return copiedRetValue;

}

extern "C" QRectF* QScrollPrepareEvent_contentPosRange_SMIX6(QScrollPrepareEvent* self) {

	QRectF retValue = self->contentPosRange();
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QScrollPrepareEvent_contentPos_SMIX7(QScrollPrepareEvent* self) {

	QPointF retValue = self->contentPos();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" void QScrollPrepareEvent_setViewportSize_SMIX8(QScrollPrepareEvent* self, const QSizeF& size) {

	self->setViewportSize(size);

}

extern "C" void QScrollPrepareEvent_setContentPosRange_SMIX9(QScrollPrepareEvent* self, const QRectF& rect) {

	self->setContentPosRange(rect);

}

extern "C" void QScrollPrepareEvent_setContentPos_SMIX10(QScrollPrepareEvent* self, const QPointF& pos) {

	self->setContentPos(pos);

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QScrollPrepareEvent_CPPObject(QScrollPrepareEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QScrollPrepareEvent_SMI_CPPObject(QScrollPrepareEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QScrollPrepareEvent
