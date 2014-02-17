
/*
* CPP Wrapper for QStatusTipEvent
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
extern "C" void SMID_QStatusTipEvent_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QStatusTipEvent_SMI: QStatusTipEvent {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QStatusTipEvent_SMI* SMIMake_QStatusTipEvent(const QString& tip) {
	QStatusTipEvent_SMI* retVal = new QStatusTipEvent_SMI(tip);
	registerDInstance(retVal);
	return retVal;
};

private:
    QStatusTipEvent_SMI(const QString& tip): QStatusTipEvent(tip) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QStatusTipEvent_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QStatusTipEvent_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QStatusTipEvent_SMI* QStatusTipEvent_QStatusTipEvent_SMIX2(char* tip___SMI) {
	QString tip = convertPCharToQString(tip___SMI);

	QStatusTipEvent_SMI* obj = QStatusTipEvent_SMI::SMIMake_QStatusTipEvent(tip);
	return obj;
}


extern "C" char* QStatusTipEvent_tip_SMIX4(QStatusTipEvent* self)  {

	QString retValue = self->tip();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QStatusTipEvent_CPPObject(QStatusTipEvent* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QStatusTipEvent_SMI_CPPObject(QStatusTipEvent_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QStatusTipEvent
