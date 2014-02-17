
/*
* CPP Wrapper for QDropEvent
*/

#include <instance_tracker.h>

#include <qevent.h>

// Headers for converters


// Externs for converters
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QDropEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QDropEvent_SMI: QDropEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QDropEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QDropEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPoint* QDropEvent_pos_SMIX4(QDropEvent* self) {

	QPoint retValue = self->pos();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" const QPointF& QDropEvent_posF_SMIX5(QDropEvent* self) {

	const QPointF& retValue = const_cast<const QPointF&> (self->posF());
	return retValue;

}

extern "C" int QDropEvent_proposedAction_SMIX9(QDropEvent* self)  {

	Qt::DropAction retValue = self->proposedAction();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" void QDropEvent_acceptProposedAction_SMIX10(QDropEvent* self) {

	self->acceptProposedAction();

}

extern "C" int QDropEvent_dropAction_SMIX11(QDropEvent* self)  {

	Qt::DropAction retValue = self->dropAction();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" void QDropEvent_setDropAction_SMIX12(QDropEvent* self, int action___SMI) {
	Qt::DropAction action = (Qt::DropAction) action___SMI;

	self->setDropAction(action);

}

extern "C" QObject* QDropEvent_source_SMIX13(QDropEvent* self) {

	QObject* retValue = self->source();
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QDropEvent_CPPObject(QDropEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QDropEvent_SMI_CPPObject(QDropEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QDropEvent
