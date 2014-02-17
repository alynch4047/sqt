
/*
* CPP Wrapper for QPushButton
*/

#include <instance_tracker.h>

#include <qpushbutton.h>

// Headers for converters
#include <QString>

// Externs for converters
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" QSize* SMID_QPushButton_sizeHint_SMIX6(void* wrappedObject);
extern "C" QSize* SMID_QPushButton_minimumSizeHint_SMIX7(void* wrappedObject);
extern "C" bool SMID_QPushButton_event_SMIX20(void* wrappedObject, QEvent* e);
extern "C" void SMID_QPushButton_paintEvent_SMIX21(void* wrappedObject, QPaintEvent* arg0);
extern "C" void SMID_QPushButton_keyPressEvent_SMIX22(void* wrappedObject, QKeyEvent* arg0);
extern "C" void SMID_QPushButton_focusInEvent_SMIX23(void* wrappedObject, QFocusEvent* arg0);
extern "C" void SMID_QPushButton_focusOutEvent_SMIX24(void* wrappedObject, QFocusEvent* arg0);
extern "C" void SMID_QPushButton_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QPushButton_SMI: QPushButton {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QPushButton_SMI* SMIMake_QPushButton(QWidget* parent) {
	QPushButton_SMI* retVal = new QPushButton_SMI(parent);
	registerDInstance(retVal);
	return retVal;
};

private:
    QPushButton_SMI(QWidget* parent): QPushButton(parent) {inhibitDestructorCallbackToD = false;};


public:
	
static QPushButton_SMI* SMIMake_QPushButton(const QString& text, QWidget* parent) {
	QPushButton_SMI* retVal = new QPushButton_SMI(text, parent);
	registerDInstance(retVal);
	return retVal;
};

private:
    QPushButton_SMI(const QString& text, QWidget* parent): QPushButton(text, parent) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:

QSize sizeHint_fromDBase() {
	return QPushButton::sizeHint();
}	
QSize sizeHint() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QPushButton_sizeHint_SMIX6(this);
	return *((QSize*) retValue);
}	

QSize minimumSizeHint_fromDBase() {
	return QPushButton::minimumSizeHint();
}	
QSize minimumSizeHint() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QPushButton_minimumSizeHint_SMIX7(this);
	return *((QSize*) retValue);
}	

bool event_fromDBase(QEvent* e) {
	return QPushButton::event(e);
}	
bool event(QEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QPushButton_event_SMIX20(this, e);
	return retValue;
}	

void paintEvent_fromDBase(QPaintEvent* arg0) {
	return QPushButton::paintEvent(arg0);
}	
void paintEvent(QPaintEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QPushButton_paintEvent_SMIX21(this, arg0);
}	

void keyPressEvent_fromDBase(QKeyEvent* arg0) {
	return QPushButton::keyPressEvent(arg0);
}	
void keyPressEvent(QKeyEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QPushButton_keyPressEvent_SMIX22(this, arg0);
}	

void focusInEvent_fromDBase(QFocusEvent* arg0) {
	return QPushButton::focusInEvent(arg0);
}	
void focusInEvent(QFocusEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QPushButton_focusInEvent_SMIX23(this, arg0);
}	

void focusOutEvent_fromDBase(QFocusEvent* arg0) {
	return QPushButton::focusOutEvent(arg0);
}	
void focusOutEvent(QFocusEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QPushButton_focusOutEvent_SMIX24(this, arg0);
}	


// Destructor
~QPushButton_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QPushButton_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPushButton_SMI* QPushButton_QPushButton_SMIX2(QWidget* parent) {
	
	QPushButton_SMI* obj = QPushButton_SMI::SMIMake_QPushButton(parent);
	return obj;
}


extern "C" QPushButton_SMI* QPushButton_QPushButton_SMIX3(char* text___SMI, QWidget* parent) {
	QString text = convertPCharToQString(text___SMI);

	QPushButton_SMI* obj = QPushButton_SMI::SMIMake_QPushButton(text, parent);
	return obj;
}


extern "C" QSize* QPushButton_sizeHint_SMIX6(QPushButton* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QPushButton_SMI*) self)->sizeHint_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->sizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" QSize* QPushButton_minimumSizeHint_SMIX7(QPushButton* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QPushButton_SMI*) self)->minimumSizeHint_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->minimumSizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" bool QPushButton_autoDefault_SMIX8(QPushButton* self) {

	bool retValue = self->autoDefault();
	return retValue;

}

extern "C" void QPushButton_setAutoDefault_SMIX9(QPushButton* self, bool arg0) {

	self->setAutoDefault(arg0);

}

extern "C" bool QPushButton_isDefault_SMIX10(QPushButton* self) {

	bool retValue = self->isDefault();
	return retValue;

}

extern "C" void QPushButton_setDefault_SMIX11(QPushButton* self, bool arg0) {

	self->setDefault(arg0);

}

extern "C" void QPushButton_setFlat_SMIX14(QPushButton* self, bool arg0) {

	self->setFlat(arg0);

}

extern "C" bool QPushButton_isFlat_SMIX15(QPushButton* self) {

	bool retValue = self->isFlat();
	return retValue;

}

extern "C" void QPushButton_showMenu_SMIX17(QPushButton* self) {

	self->showMenu();

}

extern "C" bool QPushButton_event_SMIX20(QPushButton* self, QEvent* e) {

	if (isCreatedByD(self))  {
	bool retValue = (( QPushButton_SMI*) self)->event_fromDBase(e);
	return retValue;
	}

}

extern "C" void QPushButton_paintEvent_SMIX21(QPushButton* self, QPaintEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QPushButton_SMI*) self)->paintEvent_fromDBase(arg0);
	}

}

extern "C" void QPushButton_keyPressEvent_SMIX22(QPushButton* self, QKeyEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QPushButton_SMI*) self)->keyPressEvent_fromDBase(arg0);
	}

}

extern "C" void QPushButton_focusInEvent_SMIX23(QPushButton* self, QFocusEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QPushButton_SMI*) self)->focusInEvent_fromDBase(arg0);
	}

}

extern "C" void QPushButton_focusOutEvent_SMIX24(QPushButton* self, QFocusEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QPushButton_SMI*) self)->focusOutEvent_fromDBase(arg0);
	}

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QPushButton_CPPObject(QPushButton* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QPushButton_SMI_CPPObject(QPushButton_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QPushButton
