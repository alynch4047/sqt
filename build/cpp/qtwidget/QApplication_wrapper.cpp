
/*
* CPP Wrapper for QApplication
*/

#include <instance_tracker.h>

#include <qapplication.h>

// Headers for converters

#include <QString>


// Externs for converters
extern int convertPPCharToInt(char** toConvert);
extern char** convertIntToPPChar(int toConvert);
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" bool SMID_QApplication_notify_SMIX55(void* wrappedObject, QObject* arg0, QEvent* arg1);
extern "C" bool SMID_QApplication_event_SMIX66(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QApplication_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QApplication_SMI: QApplication {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QApplication_SMI* SMIMake_QApplication(int& argc, char** argv) {
	QApplication_SMI* retVal = new QApplication_SMI(argc, argv);
	registerDInstance(retVal);
	return retVal;
};

private:
    QApplication_SMI(int& argc, char** argv): QApplication(argc, argv) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:

bool notify_fromDBase(QObject* arg0, QEvent* arg1) {
	return QApplication::notify(arg0, arg1);
}	
bool notify(QObject* arg0, QEvent* arg1) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QApplication_notify_SMIX55(this, arg0, arg1);
	return retValue;
}	

bool event_fromDBase(QEvent* arg0) {
	return QApplication::event(arg0);
}	
bool event(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QApplication_event_SMIX66(this, arg0);
	return retValue;
}	


// Destructor
~QApplication_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QApplication_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QApplication_SMI* QApplication_QApplication_SMIX3(int& argc, int argv___SMI) {
	char** argv = convertIntToPPChar(argv___SMI);

	QApplication_SMI* obj = QApplication_SMI::SMIMake_QApplication(argc, argv);
	return obj;
}


extern "C" int QApplication_colorSpec_SMIX11() {

	int retValue = QApplication::colorSpec();
	return retValue;

}

extern "C" void QApplication_setColorSpec_SMIX12(int arg0) {

	QApplication::setColorSpec(arg0);

}

extern "C" QWidget* QApplication_activePopupWidget_SMIX27() {

	QWidget* retValue = QApplication::activePopupWidget();
	return retValue;

}

extern "C" QWidget* QApplication_activeModalWidget_SMIX28() {

	QWidget* retValue = QApplication::activeModalWidget();
	return retValue;

}

extern "C" QWidget* QApplication_focusWidget_SMIX29() {

	QWidget* retValue = QApplication::focusWidget();
	return retValue;

}

extern "C" QWidget* QApplication_activeWindow_SMIX30() {

	QWidget* retValue = QApplication::activeWindow();
	return retValue;

}

extern "C" void QApplication_setActiveWindow_SMIX31(QWidget* act) {

	QApplication::setActiveWindow(act);

}

extern "C" QWidget* QApplication_widgetAt_SMIX32(const QPoint& p) {

	QWidget* retValue = QApplication::widgetAt(p);
	return retValue;

}

extern "C" QWidget* QApplication_widgetAt_SMIX33(int x, int y) {

	QWidget* retValue = QApplication::widgetAt(x, y);
	return retValue;

}

extern "C" QWidget* QApplication_topLevelAt_SMIX34(const QPoint& p) {

	QWidget* retValue = QApplication::topLevelAt(p);
	return retValue;

}

extern "C" QWidget* QApplication_topLevelAt_SMIX35(int x, int y) {

	QWidget* retValue = QApplication::topLevelAt(x, y);
	return retValue;

}

extern "C" void QApplication_beep_SMIX36() {

	QApplication::beep();

}

extern "C" void QApplication_alert_SMIX37(QWidget* widget, int msecs) {

	QApplication::alert(widget, msecs);

}

extern "C" void QApplication_setCursorFlashTime_SMIX38(int arg0) {

	QApplication::setCursorFlashTime(arg0);

}

extern "C" int QApplication_cursorFlashTime_SMIX39() {

	int retValue = QApplication::cursorFlashTime();
	return retValue;

}

extern "C" void QApplication_setDoubleClickInterval_SMIX40(int arg0) {

	QApplication::setDoubleClickInterval(arg0);

}

extern "C" int QApplication_doubleClickInterval_SMIX41() {

	int retValue = QApplication::doubleClickInterval();
	return retValue;

}

extern "C" void QApplication_setKeyboardInputInterval_SMIX42(int arg0) {

	QApplication::setKeyboardInputInterval(arg0);

}

extern "C" int QApplication_keyboardInputInterval_SMIX43() {

	int retValue = QApplication::keyboardInputInterval();
	return retValue;

}

extern "C" void QApplication_setWheelScrollLines_SMIX44(int arg0) {

	QApplication::setWheelScrollLines(arg0);

}

extern "C" int QApplication_wheelScrollLines_SMIX45() {

	int retValue = QApplication::wheelScrollLines();
	return retValue;

}

extern "C" void QApplication_setGlobalStrut_SMIX46(const QSize& arg0) {

	QApplication::setGlobalStrut(arg0);

}

extern "C" QSize* QApplication_globalStrut_SMIX47() {

	QSize retValue = QApplication::globalStrut();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" void QApplication_setStartDragTime_SMIX48(int ms) {

	QApplication::setStartDragTime(ms);

}

extern "C" int QApplication_startDragTime_SMIX49() {

	int retValue = QApplication::startDragTime();
	return retValue;

}

extern "C" void QApplication_setStartDragDistance_SMIX50(int l) {

	QApplication::setStartDragDistance(l);

}

extern "C" int QApplication_startDragDistance_SMIX51() {

	int retValue = QApplication::startDragDistance();
	return retValue;

}

extern "C" bool QApplication_isEffectEnabled_SMIX52(int arg0___SMI) {
	Qt::UIEffect arg0 = (Qt::UIEffect) arg0___SMI;

	bool retValue = QApplication::isEffectEnabled(arg0);
	return retValue;

}

extern "C" void QApplication_setEffectEnabled_SMIX53(int arg0___SMI, bool enabled) {
	Qt::UIEffect arg0 = (Qt::UIEffect) arg0___SMI;

	QApplication::setEffectEnabled(arg0, enabled);

}

extern "C" int QApplication_exec_SMIX54() {

	int retValue = QApplication::exec();
	return retValue;

}

extern "C" bool QApplication_notify_SMIX55(QApplication* self, QObject* arg0, QEvent* arg1) {

	if (isCreatedByD(self))  {
	bool retValue = (( QApplication_SMI*) self)->notify_fromDBase(arg0, arg1);
	return retValue;
	} else {
	bool retValue = self->notify(arg0, arg1);
	return retValue;
	}

}

extern "C" bool QApplication_autoSipEnabled_SMIX56(QApplication* self) {

	bool retValue = self->autoSipEnabled();
	return retValue;

}

extern "C" char* QApplication_styleSheet_SMIX57(QApplication* self)  {

	QString retValue = self->styleSheet();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QApplication_aboutQt_SMIX61() {

	QApplication::aboutQt();

}

extern "C" void QApplication_closeAllWindows_SMIX62() {

	QApplication::closeAllWindows();

}

extern "C" void QApplication_setAutoSipEnabled_SMIX63(QApplication* self, const bool enabled) {

	self->setAutoSipEnabled(enabled);

}

extern "C" void QApplication_setStyleSheet_SMIX64(QApplication* self, char* sheet___SMI) {
	QString sheet = convertPCharToQString(sheet___SMI);

	self->setStyleSheet(sheet);

}

extern "C" bool QApplication_event_SMIX66(QApplication* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	bool retValue = (( QApplication_SMI*) self)->event_fromDBase(arg0);
	return retValue;
	}

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QApplication_CPPObject(QApplication* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QApplication_SMI_CPPObject(QApplication_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QApplication
