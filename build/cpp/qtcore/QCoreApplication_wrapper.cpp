
/*
* CPP Wrapper for QCoreApplication
*/

#include <instance_tracker.h>

#include <qcoreapplication.h>

// Headers for converters
#include <QString>
using namespace std;


// Externs for converters
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
extern char* convertPCharToPChar(char* toConvert);
extern char* convertPCharToPCharArgument(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" bool SMID_QCoreApplication_notify_SMIX22(void* wrappedObject, QObject* arg0, QEvent* arg1);
extern "C" bool SMID_QCoreApplication_event_SMIX42(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QCoreApplication_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QCoreApplication_SMI: QCoreApplication {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:

bool notify_fromDBase(QObject* arg0, QEvent* arg1) {
	return QCoreApplication::notify(arg0, arg1);
}	
bool notify(QObject* arg0, QEvent* arg1) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QCoreApplication_notify_SMIX22(this, arg0, arg1);
	return retValue;
}	

bool event_fromDBase(QEvent* arg0) {
	return QCoreApplication::event(arg0);
}	
bool event(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QCoreApplication_event_SMIX42(this, arg0);
	return retValue;
}	


// Destructor
~QCoreApplication_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QCoreApplication_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" void QCoreApplication_setOrganizationDomain_SMIX5(char* orgDomain___SMI) {
	QString orgDomain = convertPCharToQString(orgDomain___SMI);

	QCoreApplication::setOrganizationDomain(orgDomain);

}

extern "C" char* QCoreApplication_organizationDomain_SMIX6()  {

	QString retValue = QCoreApplication::organizationDomain();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QCoreApplication_setOrganizationName_SMIX7(char* orgName___SMI) {
	QString orgName = convertPCharToQString(orgName___SMI);

	QCoreApplication::setOrganizationName(orgName);

}

extern "C" char* QCoreApplication_organizationName_SMIX8()  {

	QString retValue = QCoreApplication::organizationName();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QCoreApplication_setApplicationName_SMIX9(char* application___SMI) {
	QString application = convertPCharToQString(application___SMI);

	QCoreApplication::setApplicationName(application);

}

extern "C" char* QCoreApplication_applicationName_SMIX10()  {

	QString retValue = QCoreApplication::applicationName();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" QCoreApplication* QCoreApplication_instance_SMIX12() {

	QCoreApplication* retValue = QCoreApplication::instance();
	return retValue;

}

extern "C" int QCoreApplication_exec_SMIX13() {

	int retValue = QCoreApplication::exec();
	return retValue;

}

extern "C" void QCoreApplication_exit_SMIX16(int returnCode) {

	QCoreApplication::exit(returnCode);

}

extern "C" bool QCoreApplication_sendEvent_SMIX17(QObject* receiver, QEvent* event) {

	bool retValue = QCoreApplication::sendEvent(receiver, event);
	return retValue;

}

extern "C" void QCoreApplication_postEvent_SMIX18(QObject* receiver, QEvent* event, int priority) {

	QCoreApplication::postEvent(receiver, event, priority);

}

extern "C" void QCoreApplication_sendPostedEvents_SMIX19(QObject* receiver, int eventType) {

	QCoreApplication::sendPostedEvents(receiver, eventType);

}

extern "C" void QCoreApplication_removePostedEvents_SMIX20(QObject* receiver, int eventType) {

	QCoreApplication::removePostedEvents(receiver, eventType);

}

extern "C" bool QCoreApplication_hasPendingEvents_SMIX21() {

	bool retValue = QCoreApplication::hasPendingEvents();
	return retValue;

}

extern "C" bool QCoreApplication_notify_SMIX22(QCoreApplication* self, QObject* arg0, QEvent* arg1) {

	if (isCreatedByD(self))  {
	bool retValue = (( QCoreApplication_SMI*) self)->notify_fromDBase(arg0, arg1);
	return retValue;
	} else {
	bool retValue = self->notify(arg0, arg1);
	return retValue;
	}

}

extern "C" bool QCoreApplication_startingUp_SMIX23() {

	bool retValue = QCoreApplication::startingUp();
	return retValue;

}

extern "C" bool QCoreApplication_closingDown_SMIX24() {

	bool retValue = QCoreApplication::closingDown();
	return retValue;

}

extern "C" char* QCoreApplication_applicationDirPath_SMIX25()  {

	QString retValue = QCoreApplication::applicationDirPath();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" char* QCoreApplication_applicationFilePath_SMIX26()  {

	QString retValue = QCoreApplication::applicationFilePath();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QCoreApplication_addLibraryPath_SMIX29(char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	QCoreApplication::addLibraryPath(arg0);

}

extern "C" void QCoreApplication_removeLibraryPath_SMIX30(char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	QCoreApplication::removeLibraryPath(arg0);

}

extern "C" char* QCoreApplication_translate_SMIX33(char* context___SMI, char* sourceText___SMI, char* disambiguation___SMI, int n)  {
	char* context = convertPCharToPCharArgument(context___SMI);
	char* sourceText = convertPCharToPCharArgument(sourceText___SMI);
	char* disambiguation = convertPCharToPCharArgument(disambiguation___SMI);

	QString retValue = QCoreApplication::translate(context, sourceText, disambiguation, n);
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QCoreApplication_flush_SMIX34() {

	QCoreApplication::flush();

}

extern "C" void QCoreApplication_setAttribute_SMIX35(int attribute___SMI, bool on) {
	Qt::ApplicationAttribute attribute = (Qt::ApplicationAttribute) attribute___SMI;

	QCoreApplication::setAttribute(attribute, on);

}

extern "C" bool QCoreApplication_testAttribute_SMIX36(int attribute___SMI) {
	Qt::ApplicationAttribute attribute = (Qt::ApplicationAttribute) attribute___SMI;

	bool retValue = QCoreApplication::testAttribute(attribute);
	return retValue;

}

extern "C" void QCoreApplication_quit_SMIX38() {

	QCoreApplication::quit();

}

extern "C" bool QCoreApplication_event_SMIX42(QCoreApplication* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	bool retValue = (( QCoreApplication_SMI*) self)->event_fromDBase(arg0);
	return retValue;
	}

}

extern "C" void QCoreApplication_setApplicationVersion_SMIX44(char* version____SMI) {
	QString version_ = convertPCharToQString(version____SMI);

	QCoreApplication::setApplicationVersion(version_);

}

extern "C" char* QCoreApplication_applicationVersion_SMIX45()  {

	QString retValue = QCoreApplication::applicationVersion();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" qint64 QCoreApplication_applicationPid_SMIX46() {

	qint64 retValue = QCoreApplication::applicationPid();
	return retValue;

}

extern "C" bool QCoreApplication_isQuitLockEnabled_SMIX49() {

	bool retValue = QCoreApplication::isQuitLockEnabled();
	return retValue;

}

extern "C" void QCoreApplication_setQuitLockEnabled_SMIX50(bool enabled) {

	QCoreApplication::setQuitLockEnabled(enabled);

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QCoreApplication_CPPObject(QCoreApplication* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QCoreApplication_SMI_CPPObject(QCoreApplication_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QCoreApplication
