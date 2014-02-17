
/*
* CPP Wrapper for QKeyEvent
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
extern "C" void SMID_QKeyEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QKeyEvent_SMI: QKeyEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:


// Destructor
~QKeyEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QKeyEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" int QKeyEvent_key_SMIX5(QKeyEvent* self) {

	int retValue = self->key();
	return retValue;

}

extern "C" char* QKeyEvent_text_SMIX7(QKeyEvent* self)  {

	QString retValue = self->text();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" bool QKeyEvent_isAutoRepeat_SMIX8(QKeyEvent* self) {

	bool retValue = self->isAutoRepeat();
	return retValue;

}

extern "C" int QKeyEvent_count_SMIX9(QKeyEvent* self) {

	int retValue = self->count();
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QKeyEvent_CPPObject(QKeyEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QKeyEvent_SMI_CPPObject(QKeyEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QKeyEvent
