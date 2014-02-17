
/*
* CPP Wrapper for QAbstractButton
*/

#include <instance_tracker.h>

#include <qabstractbutton.h>

// Headers for converters
#include <QString>

// Externs for converters
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" bool SMID_QAbstractButton_hitButton_SMIX38(void* wrappedObject, const QPoint& pos);
extern "C" void SMID_QAbstractButton_checkStateSet_SMIX39(void* wrappedObject);
extern "C" void SMID_QAbstractButton_nextCheckState_SMIX40(void* wrappedObject);
extern "C" bool SMID_QAbstractButton_event_SMIX41(void* wrappedObject, QEvent* e);
extern "C" void SMID_QAbstractButton_keyPressEvent_SMIX42(void* wrappedObject, QKeyEvent* e);
extern "C" void SMID_QAbstractButton_keyReleaseEvent_SMIX43(void* wrappedObject, QKeyEvent* e);
extern "C" void SMID_QAbstractButton_mousePressEvent_SMIX44(void* wrappedObject, QMouseEvent* e);
extern "C" void SMID_QAbstractButton_mouseReleaseEvent_SMIX45(void* wrappedObject, QMouseEvent* e);
extern "C" void SMID_QAbstractButton_mouseMoveEvent_SMIX46(void* wrappedObject, QMouseEvent* e);
extern "C" void SMID_QAbstractButton_focusInEvent_SMIX47(void* wrappedObject, QFocusEvent* e);
extern "C" void SMID_QAbstractButton_focusOutEvent_SMIX48(void* wrappedObject, QFocusEvent* e);
extern "C" void SMID_QAbstractButton_changeEvent_SMIX49(void* wrappedObject, QEvent* e);
extern "C" void SMID_QAbstractButton_timerEvent_SMIX50(void* wrappedObject, QTimerEvent* e);
extern "C" void SMID_QAbstractButton_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QAbstractButton_SMI: QAbstractButton {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:

bool hitButton_fromDBase(const QPoint& pos) {
	return QAbstractButton::hitButton(pos);
}	
bool hitButton(const QPoint& pos) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QAbstractButton_hitButton_SMIX38(this, pos);
	return retValue;
}	

void checkStateSet_fromDBase() {
	return QAbstractButton::checkStateSet();
}	
void checkStateSet() {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_checkStateSet_SMIX39(this);
}	

void nextCheckState_fromDBase() {
	return QAbstractButton::nextCheckState();
}	
void nextCheckState() {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_nextCheckState_SMIX40(this);
}	

bool event_fromDBase(QEvent* e) {
	return QAbstractButton::event(e);
}	
bool event(QEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QAbstractButton_event_SMIX41(this, e);
	return retValue;
}	

void keyPressEvent_fromDBase(QKeyEvent* e) {
	return QAbstractButton::keyPressEvent(e);
}	
void keyPressEvent(QKeyEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_keyPressEvent_SMIX42(this, e);
}	

void keyReleaseEvent_fromDBase(QKeyEvent* e) {
	return QAbstractButton::keyReleaseEvent(e);
}	
void keyReleaseEvent(QKeyEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_keyReleaseEvent_SMIX43(this, e);
}	

void mousePressEvent_fromDBase(QMouseEvent* e) {
	return QAbstractButton::mousePressEvent(e);
}	
void mousePressEvent(QMouseEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_mousePressEvent_SMIX44(this, e);
}	

void mouseReleaseEvent_fromDBase(QMouseEvent* e) {
	return QAbstractButton::mouseReleaseEvent(e);
}	
void mouseReleaseEvent(QMouseEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_mouseReleaseEvent_SMIX45(this, e);
}	

void mouseMoveEvent_fromDBase(QMouseEvent* e) {
	return QAbstractButton::mouseMoveEvent(e);
}	
void mouseMoveEvent(QMouseEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_mouseMoveEvent_SMIX46(this, e);
}	

void focusInEvent_fromDBase(QFocusEvent* e) {
	return QAbstractButton::focusInEvent(e);
}	
void focusInEvent(QFocusEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_focusInEvent_SMIX47(this, e);
}	

void focusOutEvent_fromDBase(QFocusEvent* e) {
	return QAbstractButton::focusOutEvent(e);
}	
void focusOutEvent(QFocusEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_focusOutEvent_SMIX48(this, e);
}	

void changeEvent_fromDBase(QEvent* e) {
	return QAbstractButton::changeEvent(e);
}	
void changeEvent(QEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_changeEvent_SMIX49(this, e);
}	

void timerEvent_fromDBase(QTimerEvent* e) {
	return QAbstractButton::timerEvent(e);
}	
void timerEvent(QTimerEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QAbstractButton_timerEvent_SMIX50(this, e);
}	


// Destructor
~QAbstractButton_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QAbstractButton_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" void QAbstractButton_setAutoRepeatDelay_SMIX4(QAbstractButton* self, int arg0) {

	self->setAutoRepeatDelay(arg0);

}

extern "C" int QAbstractButton_autoRepeatDelay_SMIX5(QAbstractButton* self) {

	int retValue = self->autoRepeatDelay();
	return retValue;

}

extern "C" void QAbstractButton_setAutoRepeatInterval_SMIX6(QAbstractButton* self, int arg0) {

	self->setAutoRepeatInterval(arg0);

}

extern "C" int QAbstractButton_autoRepeatInterval_SMIX7(QAbstractButton* self) {

	int retValue = self->autoRepeatInterval();
	return retValue;

}

extern "C" void QAbstractButton_setText_SMIX8(QAbstractButton* self, char* text___SMI) {
	QString text = convertPCharToQString(text___SMI);

	self->setText(text);

}

extern "C" char* QAbstractButton_text_SMIX9(QAbstractButton* self)  {

	QString retValue = self->text();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" QSize* QAbstractButton_iconSize_SMIX12(QAbstractButton* self) {

	QSize retValue = self->iconSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" void QAbstractButton_setCheckable_SMIX15(QAbstractButton* self, bool arg0) {

	self->setCheckable(arg0);

}

extern "C" bool QAbstractButton_isCheckable_SMIX16(QAbstractButton* self) {

	bool retValue = self->isCheckable();
	return retValue;

}

extern "C" bool QAbstractButton_isChecked_SMIX17(QAbstractButton* self) {

	bool retValue = self->isChecked();
	return retValue;

}

extern "C" void QAbstractButton_setDown_SMIX18(QAbstractButton* self, bool arg0) {

	self->setDown(arg0);

}

extern "C" bool QAbstractButton_isDown_SMIX19(QAbstractButton* self) {

	bool retValue = self->isDown();
	return retValue;

}

extern "C" void QAbstractButton_setAutoRepeat_SMIX20(QAbstractButton* self, bool arg0) {

	self->setAutoRepeat(arg0);

}

extern "C" bool QAbstractButton_autoRepeat_SMIX21(QAbstractButton* self) {

	bool retValue = self->autoRepeat();
	return retValue;

}

extern "C" void QAbstractButton_setAutoExclusive_SMIX22(QAbstractButton* self, bool arg0) {

	self->setAutoExclusive(arg0);

}

extern "C" bool QAbstractButton_autoExclusive_SMIX23(QAbstractButton* self) {

	bool retValue = self->autoExclusive();
	return retValue;

}

extern "C" void QAbstractButton_setIconSize_SMIX26(QAbstractButton* self, const QSize& size) {

	self->setIconSize(size);

}

extern "C" void QAbstractButton_animateClick_SMIX27(QAbstractButton* self, int msecs) {

	self->animateClick(msecs);

}

extern "C" void QAbstractButton_click_SMIX28(QAbstractButton* self) {

	self->click();

}

extern "C" void QAbstractButton_toggle_SMIX29(QAbstractButton* self) {

	self->toggle();

}

extern "C" void QAbstractButton_setChecked_SMIX30(QAbstractButton* self, bool arg0) {

	self->setChecked(arg0);

}

extern "C" bool QAbstractButton_hitButton_SMIX38(QAbstractButton* self, const QPoint& pos) {

	if (isCreatedByD(self))  {
	bool retValue = (( QAbstractButton_SMI*) self)->hitButton_fromDBase(pos);
	return retValue;
	}

}

extern "C" void QAbstractButton_checkStateSet_SMIX39(QAbstractButton* self) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->checkStateSet_fromDBase();
	}

}

extern "C" void QAbstractButton_nextCheckState_SMIX40(QAbstractButton* self) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->nextCheckState_fromDBase();
	}

}

extern "C" bool QAbstractButton_event_SMIX41(QAbstractButton* self, QEvent* e) {

	if (isCreatedByD(self))  {
	bool retValue = (( QAbstractButton_SMI*) self)->event_fromDBase(e);
	return retValue;
	}

}

extern "C" void QAbstractButton_keyPressEvent_SMIX42(QAbstractButton* self, QKeyEvent* e) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->keyPressEvent_fromDBase(e);
	}

}

extern "C" void QAbstractButton_keyReleaseEvent_SMIX43(QAbstractButton* self, QKeyEvent* e) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->keyReleaseEvent_fromDBase(e);
	}

}

extern "C" void QAbstractButton_mousePressEvent_SMIX44(QAbstractButton* self, QMouseEvent* e) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->mousePressEvent_fromDBase(e);
	}

}

extern "C" void QAbstractButton_mouseReleaseEvent_SMIX45(QAbstractButton* self, QMouseEvent* e) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->mouseReleaseEvent_fromDBase(e);
	}

}

extern "C" void QAbstractButton_mouseMoveEvent_SMIX46(QAbstractButton* self, QMouseEvent* e) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->mouseMoveEvent_fromDBase(e);
	}

}

extern "C" void QAbstractButton_focusInEvent_SMIX47(QAbstractButton* self, QFocusEvent* e) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->focusInEvent_fromDBase(e);
	}

}

extern "C" void QAbstractButton_focusOutEvent_SMIX48(QAbstractButton* self, QFocusEvent* e) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->focusOutEvent_fromDBase(e);
	}

}

extern "C" void QAbstractButton_changeEvent_SMIX49(QAbstractButton* self, QEvent* e) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->changeEvent_fromDBase(e);
	}

}

extern "C" void QAbstractButton_timerEvent_SMIX50(QAbstractButton* self, QTimerEvent* e) {

	if (isCreatedByD(self))  {
	(( QAbstractButton_SMI*) self)->timerEvent_fromDBase(e);
	}

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QAbstractButton_CPPObject(QAbstractButton* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QAbstractButton_SMI_CPPObject(QAbstractButton_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QAbstractButton
