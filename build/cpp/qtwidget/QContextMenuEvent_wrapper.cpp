
/*
* CPP Wrapper for QContextMenuEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QContextMenuEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QContextMenuEvent_SMI: QContextMenuEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QContextMenuEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QContextMenuEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" int QContextMenuEvent_x_SMIX7(QContextMenuEvent* self) {

	int retValue = self->x();
	return retValue;

}

extern "C" int QContextMenuEvent_y_SMIX8(QContextMenuEvent* self) {

	int retValue = self->y();
	return retValue;

}

extern "C" int QContextMenuEvent_globalX_SMIX9(QContextMenuEvent* self) {

	int retValue = self->globalX();
	return retValue;

}

extern "C" int QContextMenuEvent_globalY_SMIX10(QContextMenuEvent* self) {

	int retValue = self->globalY();
	return retValue;

}

extern "C" const QPoint& QContextMenuEvent_pos_SMIX11(QContextMenuEvent* self) {

	const QPoint& retValue = const_cast<const QPoint&> (self->pos());
	return retValue;

}

extern "C" const QPoint& QContextMenuEvent_globalPos_SMIX12(QContextMenuEvent* self) {

	const QPoint& retValue = const_cast<const QPoint&> (self->globalPos());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QContextMenuEvent_CPPObject(QContextMenuEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QContextMenuEvent_SMI_CPPObject(QContextMenuEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QContextMenuEvent
