
/*
* CPP Wrapper for QLabel
*/

#include <instance_tracker.h>

#include <qlabel.h>

// Headers for converters
#include <Qt>
#include <QString>


// Externs for converters
extern int convertQFlagsToInt(Qt::WindowFlags toConvert);
extern Qt::WindowFlags convertIntToQFlags(int toConvert);
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" QSize* SMID_QLabel_sizeHint_SMIX21(void* wrappedObject);
extern "C" QSize* SMID_QLabel_minimumSizeHint_SMIX22(void* wrappedObject);
extern "C" int SMID_QLabel_heightForWidth_SMIX25(void* wrappedObject, int arg0);
extern "C" bool SMID_QLabel_event_SMIX42(void* wrappedObject, QEvent* e);
extern "C" void SMID_QLabel_paintEvent_SMIX43(void* wrappedObject, QPaintEvent* arg0);
extern "C" void SMID_QLabel_changeEvent_SMIX44(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QLabel_keyPressEvent_SMIX45(void* wrappedObject, QKeyEvent* ev);
extern "C" void SMID_QLabel_mousePressEvent_SMIX46(void* wrappedObject, QMouseEvent* ev);
extern "C" void SMID_QLabel_mouseMoveEvent_SMIX47(void* wrappedObject, QMouseEvent* ev);
extern "C" void SMID_QLabel_mouseReleaseEvent_SMIX48(void* wrappedObject, QMouseEvent* ev);
extern "C" void SMID_QLabel_contextMenuEvent_SMIX49(void* wrappedObject, QContextMenuEvent* ev);
extern "C" void SMID_QLabel_focusInEvent_SMIX50(void* wrappedObject, QFocusEvent* ev);
extern "C" void SMID_QLabel_focusOutEvent_SMIX51(void* wrappedObject, QFocusEvent* ev);
extern "C" bool SMID_QLabel_focusNextPrevChild_SMIX52(void* wrappedObject, bool next);
extern "C" void SMID_QLabel_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QLabel_SMI: QLabel {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QLabel_SMI* SMIMake_QLabel(QWidget* parent, Qt::WindowFlags flags) {
	QLabel_SMI* retVal = new QLabel_SMI(parent, flags);
	registerDInstance(retVal);
	return retVal;
};

private:
    QLabel_SMI(QWidget* parent, Qt::WindowFlags flags): QLabel(parent, flags) {inhibitDestructorCallbackToD = false;};


public:
	
static QLabel_SMI* SMIMake_QLabel(const QString& text, QWidget* parent, Qt::WindowFlags flags) {
	QLabel_SMI* retVal = new QLabel_SMI(text, parent, flags);
	registerDInstance(retVal);
	return retVal;
};

private:
    QLabel_SMI(const QString& text, QWidget* parent, Qt::WindowFlags flags): QLabel(text, parent, flags) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:

QSize sizeHint_fromDBase() {
	return QLabel::sizeHint();
}	
QSize sizeHint() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QLabel_sizeHint_SMIX21(this);
	return *((QSize*) retValue);
}	

QSize minimumSizeHint_fromDBase() {
	return QLabel::minimumSizeHint();
}	
QSize minimumSizeHint() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QLabel_minimumSizeHint_SMIX22(this);
	return *((QSize*) retValue);
}	

int heightForWidth_fromDBase(int arg0) {
	return QLabel::heightForWidth(arg0);
}	
int heightForWidth(int arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	int retValue = SMID_QLabel_heightForWidth_SMIX25(this, arg0);
	return retValue;
}	

bool event_fromDBase(QEvent* e) {
	return QLabel::event(e);
}	
bool event(QEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QLabel_event_SMIX42(this, e);
	return retValue;
}	

void paintEvent_fromDBase(QPaintEvent* arg0) {
	return QLabel::paintEvent(arg0);
}	
void paintEvent(QPaintEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLabel_paintEvent_SMIX43(this, arg0);
}	

void changeEvent_fromDBase(QEvent* arg0) {
	return QLabel::changeEvent(arg0);
}	
void changeEvent(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLabel_changeEvent_SMIX44(this, arg0);
}	

void keyPressEvent_fromDBase(QKeyEvent* ev) {
	return QLabel::keyPressEvent(ev);
}	
void keyPressEvent(QKeyEvent* ev) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLabel_keyPressEvent_SMIX45(this, ev);
}	

void mousePressEvent_fromDBase(QMouseEvent* ev) {
	return QLabel::mousePressEvent(ev);
}	
void mousePressEvent(QMouseEvent* ev) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLabel_mousePressEvent_SMIX46(this, ev);
}	

void mouseMoveEvent_fromDBase(QMouseEvent* ev) {
	return QLabel::mouseMoveEvent(ev);
}	
void mouseMoveEvent(QMouseEvent* ev) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLabel_mouseMoveEvent_SMIX47(this, ev);
}	

void mouseReleaseEvent_fromDBase(QMouseEvent* ev) {
	return QLabel::mouseReleaseEvent(ev);
}	
void mouseReleaseEvent(QMouseEvent* ev) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLabel_mouseReleaseEvent_SMIX48(this, ev);
}	

void contextMenuEvent_fromDBase(QContextMenuEvent* ev) {
	return QLabel::contextMenuEvent(ev);
}	
void contextMenuEvent(QContextMenuEvent* ev) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLabel_contextMenuEvent_SMIX49(this, ev);
}	

void focusInEvent_fromDBase(QFocusEvent* ev) {
	return QLabel::focusInEvent(ev);
}	
void focusInEvent(QFocusEvent* ev) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLabel_focusInEvent_SMIX50(this, ev);
}	

void focusOutEvent_fromDBase(QFocusEvent* ev) {
	return QLabel::focusOutEvent(ev);
}	
void focusOutEvent(QFocusEvent* ev) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLabel_focusOutEvent_SMIX51(this, ev);
}	

bool focusNextPrevChild_fromDBase(bool next) {
	return QLabel::focusNextPrevChild(next);
}	
bool focusNextPrevChild(bool next) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QLabel_focusNextPrevChild_SMIX52(this, next);
	return retValue;
}	


// Destructor
~QLabel_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QLabel_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QLabel_SMI* QLabel_QLabel_SMIX2(QWidget* parent, int flags___SMI) {
	Qt::WindowFlags flags = convertIntToQFlags(flags___SMI);

	QLabel_SMI* obj = QLabel_SMI::SMIMake_QLabel(parent, flags);
	return obj;
}


extern "C" QLabel_SMI* QLabel_QLabel_SMIX3(char* text___SMI, QWidget* parent, int flags___SMI) {
	QString text = convertPCharToQString(text___SMI);
Qt::WindowFlags flags = convertIntToQFlags(flags___SMI);

	QLabel_SMI* obj = QLabel_SMI::SMIMake_QLabel(text, parent, flags);
	return obj;
}


extern "C" char* QLabel_text_SMIX5(QLabel* self)  {

	QString retValue = self->text();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" int QLabel_textFormat_SMIX9(QLabel* self)  {

	Qt::TextFormat retValue = self->textFormat();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" void QLabel_setTextFormat_SMIX10(QLabel* self, int arg0___SMI) {
	Qt::TextFormat arg0 = (Qt::TextFormat) arg0___SMI;

	self->setTextFormat(arg0);

}

extern "C" void QLabel_setWordWrap_SMIX13(QLabel* self, bool on) {

	self->setWordWrap(on);

}

extern "C" bool QLabel_wordWrap_SMIX14(QLabel* self) {

	bool retValue = self->wordWrap();
	return retValue;

}

extern "C" int QLabel_indent_SMIX15(QLabel* self) {

	int retValue = self->indent();
	return retValue;

}

extern "C" void QLabel_setIndent_SMIX16(QLabel* self, int arg0) {

	self->setIndent(arg0);

}

extern "C" int QLabel_margin_SMIX17(QLabel* self) {

	int retValue = self->margin();
	return retValue;

}

extern "C" void QLabel_setMargin_SMIX18(QLabel* self, int arg0) {

	self->setMargin(arg0);

}

extern "C" bool QLabel_hasScaledContents_SMIX19(QLabel* self) {

	bool retValue = self->hasScaledContents();
	return retValue;

}

extern "C" void QLabel_setScaledContents_SMIX20(QLabel* self, bool arg0) {

	self->setScaledContents(arg0);

}

extern "C" QSize* QLabel_sizeHint_SMIX21(QLabel* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QLabel_SMI*) self)->sizeHint_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->sizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" QSize* QLabel_minimumSizeHint_SMIX22(QLabel* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QLabel_SMI*) self)->minimumSizeHint_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->minimumSizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" void QLabel_setBuddy_SMIX23(QLabel* self, QWidget* arg0) {

	self->setBuddy(arg0);

}

extern "C" QWidget* QLabel_buddy_SMIX24(QLabel* self) {

	QWidget* retValue = self->buddy();
	return retValue;

}

extern "C" int QLabel_heightForWidth_SMIX25(QLabel* self, int arg0) {

	if (isCreatedByD(self))  {
	int retValue = (( QLabel_SMI*) self)->heightForWidth_fromDBase(arg0);
	return retValue;
	} else {
	int retValue = self->heightForWidth(arg0);
	return retValue;
	}

}

extern "C" bool QLabel_openExternalLinks_SMIX26(QLabel* self) {

	bool retValue = self->openExternalLinks();
	return retValue;

}

extern "C" void QLabel_setOpenExternalLinks_SMIX29(QLabel* self, bool open) {

	self->setOpenExternalLinks(open);

}

extern "C" void QLabel_clear_SMIX31(QLabel* self) {

	self->clear();

}

extern "C" void QLabel_setNum_SMIX33(QLabel* self, double arg0) {

	self->setNum(arg0);

}

extern "C" void QLabel_setNum_SMIX34(QLabel* self, int arg0) {

	self->setNum(arg0);

}

extern "C" void QLabel_setText_SMIX37(QLabel* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->setText(arg0);

}

extern "C" bool QLabel_event_SMIX42(QLabel* self, QEvent* e) {

	if (isCreatedByD(self))  {
	bool retValue = (( QLabel_SMI*) self)->event_fromDBase(e);
	return retValue;
	}

}

extern "C" void QLabel_paintEvent_SMIX43(QLabel* self, QPaintEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLabel_SMI*) self)->paintEvent_fromDBase(arg0);
	}

}

extern "C" void QLabel_changeEvent_SMIX44(QLabel* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLabel_SMI*) self)->changeEvent_fromDBase(arg0);
	}

}

extern "C" void QLabel_keyPressEvent_SMIX45(QLabel* self, QKeyEvent* ev) {

	if (isCreatedByD(self))  {
	(( QLabel_SMI*) self)->keyPressEvent_fromDBase(ev);
	}

}

extern "C" void QLabel_mousePressEvent_SMIX46(QLabel* self, QMouseEvent* ev) {

	if (isCreatedByD(self))  {
	(( QLabel_SMI*) self)->mousePressEvent_fromDBase(ev);
	}

}

extern "C" void QLabel_mouseMoveEvent_SMIX47(QLabel* self, QMouseEvent* ev) {

	if (isCreatedByD(self))  {
	(( QLabel_SMI*) self)->mouseMoveEvent_fromDBase(ev);
	}

}

extern "C" void QLabel_mouseReleaseEvent_SMIX48(QLabel* self, QMouseEvent* ev) {

	if (isCreatedByD(self))  {
	(( QLabel_SMI*) self)->mouseReleaseEvent_fromDBase(ev);
	}

}

extern "C" void QLabel_contextMenuEvent_SMIX49(QLabel* self, QContextMenuEvent* ev) {

	if (isCreatedByD(self))  {
	(( QLabel_SMI*) self)->contextMenuEvent_fromDBase(ev);
	}

}

extern "C" void QLabel_focusInEvent_SMIX50(QLabel* self, QFocusEvent* ev) {

	if (isCreatedByD(self))  {
	(( QLabel_SMI*) self)->focusInEvent_fromDBase(ev);
	}

}

extern "C" void QLabel_focusOutEvent_SMIX51(QLabel* self, QFocusEvent* ev) {

	if (isCreatedByD(self))  {
	(( QLabel_SMI*) self)->focusOutEvent_fromDBase(ev);
	}

}

extern "C" bool QLabel_focusNextPrevChild_SMIX52(QLabel* self, bool next) {

	if (isCreatedByD(self))  {
	bool retValue = (( QLabel_SMI*) self)->focusNextPrevChild_fromDBase(next);
	return retValue;
	}

}

extern "C" void QLabel_setSelection_SMIX54(QLabel* self, int arg0, int arg1) {

	self->setSelection(arg0, arg1);

}

extern "C" bool QLabel_hasSelectedText_SMIX55(QLabel* self) {

	bool retValue = self->hasSelectedText();
	return retValue;

}

extern "C" char* QLabel_selectedText_SMIX56(QLabel* self)  {

	QString retValue = self->selectedText();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" int QLabel_selectionStart_SMIX57(QLabel* self) {

	int retValue = self->selectionStart();
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QLabel_CPPObject(QLabel* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QLabel_SMI_CPPObject(QLabel_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QLabel
