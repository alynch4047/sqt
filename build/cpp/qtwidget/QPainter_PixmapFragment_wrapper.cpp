
/*
* CPP Wrapper for PixmapFragment
*/

#include <instance_tracker.h>

#include <qpainter.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_PixmapFragment_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QPainter_PixmapFragment_SMI: QPainter::PixmapFragment {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QPainter_PixmapFragment_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_PixmapFragment_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QPainter_PixmapFragment_CPPObject(QPainter::PixmapFragment* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QPainter_QPainter_PixmapFragment_SMI_CPPObject(QPainter_PixmapFragment_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for PixmapFragment
