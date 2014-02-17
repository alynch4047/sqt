
/*
* CPP Wrapper for QGenericReturnArgument
*/

#include <instance_tracker.h>

#include <qobjectdefs.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QGenericReturnArgument_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QGenericReturnArgument_SMI: QGenericReturnArgument {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QGenericReturnArgument_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QGenericReturnArgument_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QGenericReturnArgument_CPPObject(QGenericReturnArgument* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QGenericReturnArgument_SMI_CPPObject(QGenericReturnArgument_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QGenericReturnArgument
