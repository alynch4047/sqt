
/*
* CPP Wrapper for QHelpEvent
*/

#include <instance_tracker.h>

#include <qevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QHelpEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QHelpEvent_SMI: QHelpEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QHelpEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QHelpEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" int QHelpEvent_x_SMIX4(QHelpEvent* self) {

	int retValue = self->x();
	return retValue;

}

extern "C" int QHelpEvent_y_SMIX5(QHelpEvent* self) {

	int retValue = self->y();
	return retValue;

}

extern "C" int QHelpEvent_globalX_SMIX6(QHelpEvent* self) {

	int retValue = self->globalX();
	return retValue;

}

extern "C" int QHelpEvent_globalY_SMIX7(QHelpEvent* self) {

	int retValue = self->globalY();
	return retValue;

}

extern "C" const QPoint& QHelpEvent_pos_SMIX8(QHelpEvent* self) {

	const QPoint& retValue = const_cast<const QPoint&> (self->pos());
	return retValue;

}

extern "C" const QPoint& QHelpEvent_globalPos_SMIX9(QHelpEvent* self) {

	const QPoint& retValue = const_cast<const QPoint&> (self->globalPos());
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QHelpEvent_CPPObject(QHelpEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QHelpEvent_SMI_CPPObject(QHelpEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QHelpEvent
