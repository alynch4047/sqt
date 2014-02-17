
/*
* CPP Wrapper for Connection
*/

#include <instance_tracker.h>

        #include <qobjectdefs.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_Connection_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QMetaObject_Connection_SMI: QMetaObject::Connection {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QMetaObject_Connection_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_Connection_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QMetaObject_Connection_CPPObject(QMetaObject::Connection* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QMetaObject_QMetaObject_Connection_SMI_CPPObject(QMetaObject_Connection_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for Connection
