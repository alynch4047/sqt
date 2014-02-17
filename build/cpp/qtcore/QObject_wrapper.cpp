
/*
* CPP Wrapper for QObject
*/

#include <instance_tracker.h>

#include <qobject.h>

// Headers for converters
using namespace std;
#include <QString>


// Externs for converters
extern char* convertPCharToPChar(char* toConvert);
extern char* convertPCharToPCharArgument(char* toConvert);
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" bool SMID_QObject_event_SMIX10(void* wrappedObject, QEvent* arg0);
extern "C" bool SMID_QObject_eventFilter_SMIX11(void* wrappedObject, QObject* arg0, QEvent* arg1);
extern "C" void SMID_QObject_timerEvent_SMIX49(void* wrappedObject, QTimerEvent* arg0);
extern "C" void SMID_QObject_childEvent_SMIX50(void* wrappedObject, QChildEvent* arg0);
extern "C" void SMID_QObject_customEvent_SMIX51(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QObject_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QObject_SMI: QObject {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QObject_SMI* SMIMake_QObject(QObject* parent) {
	QObject_SMI* retVal = new QObject_SMI(parent);
	registerDInstance(retVal);
	return retVal;
};

private:
    QObject_SMI(QObject* parent): QObject(parent) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:

bool event_fromDBase(QEvent* arg0) {
	return QObject::event(arg0);
}	
bool event(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QObject_event_SMIX10(this, arg0);
	return retValue;
}	

bool eventFilter_fromDBase(QObject* arg0, QEvent* arg1) {
	return QObject::eventFilter(arg0, arg1);
}	
bool eventFilter(QObject* arg0, QEvent* arg1) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QObject_eventFilter_SMIX11(this, arg0, arg1);
	return retValue;
}	

QObject* sender_fromDBase() {
	return QObject::sender();
}
void timerEvent_fromDBase(QTimerEvent* arg0) {
	return QObject::timerEvent(arg0);
}	
void timerEvent(QTimerEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QObject_timerEvent_SMIX49(this, arg0);
}	

void childEvent_fromDBase(QChildEvent* arg0) {
	return QObject::childEvent(arg0);
}	
void childEvent(QChildEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QObject_childEvent_SMIX50(this, arg0);
}	

void customEvent_fromDBase(QEvent* arg0) {
	return QObject::customEvent(arg0);
}	
void customEvent(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QObject_customEvent_SMIX51(this, arg0);
}	

int senderSignalIndex_fromDBase() {
	return QObject::senderSignalIndex();
}

// Destructor
~QObject_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QObject_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" const QMetaObject* QObject_metaObject_SMIX6(QObject* self) {

	const QMetaObject* retValue = const_cast<const QMetaObject*> (self->metaObject());
	return retValue;

}

extern "C" QObject_SMI* QObject_QObject_SMIX7(QObject* parent) {
	
	QObject_SMI* obj = QObject_SMI::SMIMake_QObject(parent);
	return obj;
}


extern "C" bool QObject_event_SMIX10(QObject* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	bool retValue = (( QObject_SMI*) self)->event_fromDBase(arg0);
	return retValue;
	} else {
	bool retValue = self->event(arg0);
	return retValue;
	}

}

extern "C" bool QObject_eventFilter_SMIX11(QObject* self, QObject* arg0, QEvent* arg1) {

	if (isCreatedByD(self))  {
	bool retValue = (( QObject_SMI*) self)->eventFilter_fromDBase(arg0, arg1);
	return retValue;
	} else {
	bool retValue = self->eventFilter(arg0, arg1);
	return retValue;
	}

}

extern "C" char* QObject_tr_SMIX12(QObject* self, char* sourceText___SMI, char* disambiguation___SMI, int n)  {
	char* sourceText = convertPCharToPCharArgument(sourceText___SMI);
	char* disambiguation = convertPCharToPCharArgument(disambiguation___SMI);

	QString retValue = self->tr(sourceText, disambiguation, n);
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" QMetaObject::Connection* QObject_connect_SMIX14(const QObject* sender, char* signal___SMI, const QObject* receiver, char* member___SMI) {
	char* signal = convertPCharToPCharArgument(signal___SMI);
	char* member = convertPCharToPCharArgument(member___SMI);

	QMetaObject::Connection retValue = QObject::connect(sender, signal, receiver, member);
	QMetaObject::Connection* copiedRetValue = new QMetaObject::Connection(retValue);
	return copiedRetValue;

}

extern "C" bool QObject_isConnectionValid_SMIX15(QMetaObject::Connection* connection) {

	// cast to bool
	bool success = connection;
	return success;

}

extern "C" bool QObject_simpleConnect_SMIX17(const QObject* sender, char* signal___SMI, const QObject* receiver, char* member___SMI) {
	char* signal = convertPCharToPCharArgument(signal___SMI);
	char* member = convertPCharToPCharArgument(member___SMI);

	QMetaObject::Connection conn = QObject::connect(sender, signal, receiver, member);
	bool success = conn;
	return success;

}

extern "C" char* QObject_objectName_SMIX19(QObject* self)  {

	QString retValue = self->objectName();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QObject_setObjectName_SMIX20(QObject* self, char* name___SMI) {
	QString name = convertPCharToQString(name___SMI);

	self->setObjectName(name);

}

extern "C" bool QObject_isWidgetType_SMIX21(QObject* self) {

	bool retValue = self->isWidgetType();
	return retValue;

}

extern "C" bool QObject_isWindowType_SMIX22(QObject* self) {

	bool retValue = self->isWindowType();
	return retValue;

}

extern "C" bool QObject_signalsBlocked_SMIX23(QObject* self) {

	bool retValue = self->signalsBlocked();
	return retValue;

}

extern "C" bool QObject_blockSignals_SMIX24(QObject* self, bool b) {

	bool retValue = self->blockSignals(b);
	return retValue;

}

extern "C" int QObject_startTimer_SMIX27(QObject* self, int interval, int timerType___SMI) {
	Qt::TimerType timerType = (Qt::TimerType) timerType___SMI;

	int retValue = self->startTimer(interval, timerType);
	return retValue;

}

extern "C" void QObject_killTimer_SMIX28(QObject* self, int id) {

	self->killTimer(id);

}

extern "C" void QObject_setParent_SMIX30(QObject* self, QObject* arg0) {

	self->setParent(arg0);

}

extern "C" void QObject_installEventFilter_SMIX31(QObject* self, QObject* arg0) {

	self->installEventFilter(arg0);

}

extern "C" void QObject_removeEventFilter_SMIX32(QObject* self, QObject* arg0) {

	self->removeEventFilter(arg0);

}

extern "C" void QObject_dumpObjectInfo_SMIX33(QObject* self) {

	self->dumpObjectInfo();

}

extern "C" void QObject_dumpObjectTree_SMIX34(QObject* self) {

	self->dumpObjectTree();

}

extern "C" QObject* QObject_parent_SMIX42(QObject* self) {

	QObject* retValue = self->parent();
	return retValue;

}

extern "C" bool QObject_inherits_SMIX43(QObject* self, char* classname___SMI) {
	char* classname = convertPCharToPCharArgument(classname___SMI);

	bool retValue = self->inherits(classname);
	return retValue;

}

extern "C" void QObject_deleteLater_SMIX45(QObject* self) {

	self->deleteLater();

}

extern "C" QObject* QObject_sender_SMIX47(QObject* self) {

	if (isCreatedByD(self))  {
	QObject* retValue = (( QObject_SMI*) self)->sender_fromDBase();
	return retValue;
	}

}

extern "C" void QObject_timerEvent_SMIX49(QObject* self, QTimerEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QObject_SMI*) self)->timerEvent_fromDBase(arg0);
	}

}

extern "C" void QObject_childEvent_SMIX50(QObject* self, QChildEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QObject_SMI*) self)->childEvent_fromDBase(arg0);
	}

}

extern "C" void QObject_customEvent_SMIX51(QObject* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QObject_SMI*) self)->customEvent_fromDBase(arg0);
	}

}

extern "C" int QObject_senderSignalIndex_SMIX54(QObject* self) {

	if (isCreatedByD(self))  {
	int retValue = (( QObject_SMI*) self)->senderSignalIndex_fromDBase();
	return retValue;
	}

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QObject_CPPObject(QObject* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QObject_SMI_CPPObject(QObject_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QObject
