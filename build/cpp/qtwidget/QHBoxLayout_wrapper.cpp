
/*
* CPP Wrapper for QHBoxLayout
*/

#include <instance_tracker.h>

#include <qboxlayout.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QHBoxLayout_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QHBoxLayout_SMI: QHBoxLayout {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QHBoxLayout_SMI* SMIMake_QHBoxLayout() {
	QHBoxLayout_SMI* retVal = new QHBoxLayout_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QHBoxLayout_SMI(): QHBoxLayout() {inhibitDestructorCallbackToD = false;};


public:
	
static QHBoxLayout_SMI* SMIMake_QHBoxLayout(QWidget* parent) {
	QHBoxLayout_SMI* retVal = new QHBoxLayout_SMI(parent);
	registerDInstance(retVal);
	return retVal;
};

private:
    QHBoxLayout_SMI(QWidget* parent): QHBoxLayout(parent) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QHBoxLayout_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QHBoxLayout_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QHBoxLayout_SMI* QHBoxLayout_QHBoxLayout_SMIX2() {
	
	QHBoxLayout_SMI* obj = QHBoxLayout_SMI::SMIMake_QHBoxLayout();
	return obj;
}


extern "C" QHBoxLayout_SMI* QHBoxLayout_QHBoxLayout_SMIX3(QWidget* parent) {
	
	QHBoxLayout_SMI* obj = QHBoxLayout_SMI::SMIMake_QHBoxLayout(parent);
	return obj;
}



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QHBoxLayout_CPPObject(QHBoxLayout* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QHBoxLayout_SMI_CPPObject(QHBoxLayout_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QHBoxLayout
