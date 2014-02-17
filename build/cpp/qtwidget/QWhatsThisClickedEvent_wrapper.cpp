
/*
* CPP Wrapper for QWhatsThisClickedEvent
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
extern "C" void SMID_QWhatsThisClickedEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QWhatsThisClickedEvent_SMI: QWhatsThisClickedEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QWhatsThisClickedEvent_SMI* SMIMake_QWhatsThisClickedEvent(const QString& href) {
	QWhatsThisClickedEvent_SMI* retVal = new QWhatsThisClickedEvent_SMI(href);
	registerDInstance(retVal);
	return retVal;
};

private:
    QWhatsThisClickedEvent_SMI(const QString& href): QWhatsThisClickedEvent(href) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QWhatsThisClickedEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QWhatsThisClickedEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QWhatsThisClickedEvent_SMI* QWhatsThisClickedEvent_QWhatsThisClickedEvent_SMIX2(char* href___SMI) {
	QString href = convertPCharToQString(href___SMI);

	QWhatsThisClickedEvent_SMI* obj = QWhatsThisClickedEvent_SMI::SMIMake_QWhatsThisClickedEvent(href);
	return obj;
}


extern "C" char* QWhatsThisClickedEvent_href_SMIX4(QWhatsThisClickedEvent* self)  {

	QString retValue = self->href();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QWhatsThisClickedEvent_CPPObject(QWhatsThisClickedEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QWhatsThisClickedEvent_SMI_CPPObject(QWhatsThisClickedEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QWhatsThisClickedEvent
