
/*
* CPP Wrapper for QChildEvent
*/

#include <instance_tracker.h>

#include <qcoreevent.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QChildEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QChildEvent_SMI: QChildEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QChildEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QChildEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QObject* QChildEvent_child_SMIX4(QChildEvent* self) {

	QObject* retValue = self->child();
	return retValue;

}

extern "C" bool QChildEvent_added_SMIX5(QChildEvent* self) {

	bool retValue = self->added();
	return retValue;

}

extern "C" bool QChildEvent_polished_SMIX6(QChildEvent* self) {

	bool retValue = self->polished();
	return retValue;

}

extern "C" bool QChildEvent_removed_SMIX7(QChildEvent* self) {

	bool retValue = self->removed();
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QChildEvent_CPPObject(QChildEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QChildEvent_SMI_CPPObject(QChildEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QChildEvent
