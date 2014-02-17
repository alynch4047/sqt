
/*
* CPP Wrapper for QVBoxLayout
*/

#include <instance_tracker.h>

#include <qboxlayout.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QVBoxLayout_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QVBoxLayout_SMI: QVBoxLayout {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QVBoxLayout_SMI* SMIMake_QVBoxLayout() {
	QVBoxLayout_SMI* retVal = new QVBoxLayout_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QVBoxLayout_SMI(): QVBoxLayout() {inhibitDestructorCallbackToD = false;};


public:
	
static QVBoxLayout_SMI* SMIMake_QVBoxLayout(QWidget* parent) {
	QVBoxLayout_SMI* retVal = new QVBoxLayout_SMI(parent);
	registerDInstance(retVal);
	return retVal;
};

private:
    QVBoxLayout_SMI(QWidget* parent): QVBoxLayout(parent) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QVBoxLayout_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QVBoxLayout_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QVBoxLayout_SMI* QVBoxLayout_QVBoxLayout_SMIX2() {
	
	QVBoxLayout_SMI* obj = QVBoxLayout_SMI::SMIMake_QVBoxLayout();
	return obj;
}


extern "C" QVBoxLayout_SMI* QVBoxLayout_QVBoxLayout_SMIX3(QWidget* parent) {
	
	QVBoxLayout_SMI* obj = QVBoxLayout_SMI::SMIMake_QVBoxLayout(parent);
	return obj;
}



/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QVBoxLayout_CPPObject(QVBoxLayout* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QVBoxLayout_SMI_CPPObject(QVBoxLayout_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QVBoxLayout
