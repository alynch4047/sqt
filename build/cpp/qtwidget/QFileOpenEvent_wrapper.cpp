
/*
* CPP Wrapper for QFileOpenEvent
*/

#include <instance_tracker.h>

#include <qevent.h>

// Headers for converters
#include <QString>

// Externs for converters
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QFileOpenEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QFileOpenEvent_SMI: QFileOpenEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QFileOpenEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QFileOpenEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" char* QFileOpenEvent_file_SMIX3(QFileOpenEvent* self)  {

	QString retValue = self->file();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QFileOpenEvent_CPPObject(QFileOpenEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QFileOpenEvent_SMI_CPPObject(QFileOpenEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QFileOpenEvent
