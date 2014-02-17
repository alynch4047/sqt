
/*
* CPP Wrapper for QGuiApplication
*/

#include <instance_tracker.h>

#include <qguiapplication.h>

// Headers for converters

#include <QString>


// Externs for converters
extern int convertPPCharToInt(char** toConvert);
extern char** convertIntToPPChar(int toConvert);
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" bool SMID_QGuiApplication_notify_SMIX36(void* wrappedObject, QObject* arg0, QEvent* arg1);
extern "C" bool SMID_QGuiApplication_event_SMIX49(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QGuiApplication_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QGuiApplication_SMI: QGuiApplication {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QGuiApplication_SMI* SMIMake_QGuiApplication(int& argc, char** argv) {
	QGuiApplication_SMI* retVal = new QGuiApplication_SMI(argc, argv);
	registerDInstance(retVal);
	return retVal;
};

private:
    QGuiApplication_SMI(int& argc, char** argv): QGuiApplication(argc, argv) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:

bool notify_fromDBase(QObject* arg0, QEvent* arg1) {
	return QGuiApplication::notify(arg0, arg1);
}	
bool notify(QObject* arg0, QEvent* arg1) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QGuiApplication_notify_SMIX36(this, arg0, arg1);
	return retValue;
}	

bool event_fromDBase(QEvent* arg0) {
	return QGuiApplication::event(arg0);
}	
bool event(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QGuiApplication_event_SMIX49(this, arg0);
	return retValue;
}	


// Destructor
~QGuiApplication_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QGuiApplication_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QGuiApplication_SMI* QGuiApplication_QGuiApplication_SMIX3(int& argc, int argv___SMI) {
	char** argv = convertIntToPPChar(argv___SMI);

	QGuiApplication_SMI* obj = QGuiApplication_SMI::SMIMake_QGuiApplication(argc, argv);
	return obj;
}


extern "C" char* QGuiApplication_platformName_SMIX10()  {

	QString retValue = QGuiApplication::platformName();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" QObject* QGuiApplication_focusObject_SMIX12() {

	QObject* retValue = QGuiApplication::focusObject();
	return retValue;

}

extern "C" void QGuiApplication_restoreOverrideCursor_SMIX18() {

	QGuiApplication::restoreOverrideCursor();

}

extern "C" void QGuiApplication_setLayoutDirection_SMIX27(int direction___SMI) {
	Qt::LayoutDirection direction = (Qt::LayoutDirection) direction___SMI;

	QGuiApplication::setLayoutDirection(direction);

}

extern "C" int QGuiApplication_layoutDirection_SMIX28()  {

	Qt::LayoutDirection retValue = QGuiApplication::layoutDirection();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" bool QGuiApplication_isRightToLeft_SMIX29() {

	bool retValue = QGuiApplication::isRightToLeft();
	return retValue;

}

extern "C" bool QGuiApplication_isLeftToRight_SMIX30() {

	bool retValue = QGuiApplication::isLeftToRight();
	return retValue;

}

extern "C" void QGuiApplication_setDesktopSettingsAware_SMIX31(bool on) {

	QGuiApplication::setDesktopSettingsAware(on);

}

extern "C" bool QGuiApplication_desktopSettingsAware_SMIX32() {

	bool retValue = QGuiApplication::desktopSettingsAware();
	return retValue;

}

extern "C" void QGuiApplication_setQuitOnLastWindowClosed_SMIX33(bool quit) {

	QGuiApplication::setQuitOnLastWindowClosed(quit);

}

extern "C" bool QGuiApplication_quitOnLastWindowClosed_SMIX34() {

	bool retValue = QGuiApplication::quitOnLastWindowClosed();
	return retValue;

}

extern "C" int QGuiApplication_exec_SMIX35() {

	int retValue = QGuiApplication::exec();
	return retValue;

}

extern "C" bool QGuiApplication_notify_SMIX36(QGuiApplication* self, QObject* arg0, QEvent* arg1) {

	if (isCreatedByD(self))  {
	bool retValue = (( QGuiApplication_SMI*) self)->notify_fromDBase(arg0, arg1);
	return retValue;
	} else {
	bool retValue = self->notify(arg0, arg1);
	return retValue;
	}

}

extern "C" void QGuiApplication_setApplicationDisplayName_SMIX44(char* name___SMI) {
	QString name = convertPCharToQString(name___SMI);

	QGuiApplication::setApplicationDisplayName(name);

}

extern "C" char* QGuiApplication_applicationDisplayName_SMIX45()  {

	QString retValue = QGuiApplication::applicationDisplayName();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" bool QGuiApplication_event_SMIX49(QGuiApplication* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	bool retValue = (( QGuiApplication_SMI*) self)->event_fromDBase(arg0);
	return retValue;
	}

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QGuiApplication_CPPObject(QGuiApplication* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QGuiApplication_SMI_CPPObject(QGuiApplication_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QGuiApplication
