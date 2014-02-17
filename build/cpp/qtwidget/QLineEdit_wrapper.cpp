
/*
* CPP Wrapper for QLineEdit
*/

#include <instance_tracker.h>

#include <qlineedit.h>

// Headers for converters
#include <QString>


// Externs for converters
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" QSize* SMID_QLineEdit_sizeHint_SMIX20(void* wrappedObject);
extern "C" QSize* SMID_QLineEdit_minimumSizeHint_SMIX21(void* wrappedObject);
extern "C" void SMID_QLineEdit_mousePressEvent_SMIX68(void* wrappedObject, QMouseEvent* arg0);
extern "C" void SMID_QLineEdit_mouseMoveEvent_SMIX69(void* wrappedObject, QMouseEvent* arg0);
extern "C" void SMID_QLineEdit_mouseReleaseEvent_SMIX70(void* wrappedObject, QMouseEvent* arg0);
extern "C" void SMID_QLineEdit_mouseDoubleClickEvent_SMIX71(void* wrappedObject, QMouseEvent* arg0);
extern "C" void SMID_QLineEdit_keyPressEvent_SMIX72(void* wrappedObject, QKeyEvent* arg0);
extern "C" void SMID_QLineEdit_focusInEvent_SMIX73(void* wrappedObject, QFocusEvent* arg0);
extern "C" void SMID_QLineEdit_focusOutEvent_SMIX74(void* wrappedObject, QFocusEvent* arg0);
extern "C" void SMID_QLineEdit_paintEvent_SMIX75(void* wrappedObject, QPaintEvent* arg0);
extern "C" void SMID_QLineEdit_dragEnterEvent_SMIX76(void* wrappedObject, QDragEnterEvent* arg0);
extern "C" void SMID_QLineEdit_dragMoveEvent_SMIX77(void* wrappedObject, QDragMoveEvent* e);
extern "C" void SMID_QLineEdit_dragLeaveEvent_SMIX78(void* wrappedObject, QDragLeaveEvent* e);
extern "C" void SMID_QLineEdit_dropEvent_SMIX79(void* wrappedObject, QDropEvent* arg0);
extern "C" void SMID_QLineEdit_changeEvent_SMIX80(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QLineEdit_contextMenuEvent_SMIX81(void* wrappedObject, QContextMenuEvent* arg0);
extern "C" void SMID_QLineEdit_inputMethodEvent_SMIX82(void* wrappedObject, QInputMethodEvent* arg0);
extern "C" bool SMID_QLineEdit_event_SMIX86(void* wrappedObject, QEvent* arg0);
extern "C" void SMID_QLineEdit_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QLineEdit_SMI: QLineEdit {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QLineEdit_SMI* SMIMake_QLineEdit(QWidget* parent) {
	QLineEdit_SMI* retVal = new QLineEdit_SMI(parent);
	registerDInstance(retVal);
	return retVal;
};

private:
    QLineEdit_SMI(QWidget* parent): QLineEdit(parent) {inhibitDestructorCallbackToD = false;};


public:
	
static QLineEdit_SMI* SMIMake_QLineEdit(const QString& contents, QWidget* parent) {
	QLineEdit_SMI* retVal = new QLineEdit_SMI(contents, parent);
	registerDInstance(retVal);
	return retVal;
};

private:
    QLineEdit_SMI(const QString& contents, QWidget* parent): QLineEdit(contents, parent) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:

QSize sizeHint_fromDBase() {
	return QLineEdit::sizeHint();
}	
QSize sizeHint() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QLineEdit_sizeHint_SMIX20(this);
	return *((QSize*) retValue);
}	

QSize minimumSizeHint_fromDBase() {
	return QLineEdit::minimumSizeHint();
}	
QSize minimumSizeHint() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QLineEdit_minimumSizeHint_SMIX21(this);
	return *((QSize*) retValue);
}	

void mousePressEvent_fromDBase(QMouseEvent* arg0) {
	return QLineEdit::mousePressEvent(arg0);
}	
void mousePressEvent(QMouseEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_mousePressEvent_SMIX68(this, arg0);
}	

void mouseMoveEvent_fromDBase(QMouseEvent* arg0) {
	return QLineEdit::mouseMoveEvent(arg0);
}	
void mouseMoveEvent(QMouseEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_mouseMoveEvent_SMIX69(this, arg0);
}	

void mouseReleaseEvent_fromDBase(QMouseEvent* arg0) {
	return QLineEdit::mouseReleaseEvent(arg0);
}	
void mouseReleaseEvent(QMouseEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_mouseReleaseEvent_SMIX70(this, arg0);
}	

void mouseDoubleClickEvent_fromDBase(QMouseEvent* arg0) {
	return QLineEdit::mouseDoubleClickEvent(arg0);
}	
void mouseDoubleClickEvent(QMouseEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_mouseDoubleClickEvent_SMIX71(this, arg0);
}	

void keyPressEvent_fromDBase(QKeyEvent* arg0) {
	return QLineEdit::keyPressEvent(arg0);
}	
void keyPressEvent(QKeyEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_keyPressEvent_SMIX72(this, arg0);
}	

void focusInEvent_fromDBase(QFocusEvent* arg0) {
	return QLineEdit::focusInEvent(arg0);
}	
void focusInEvent(QFocusEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_focusInEvent_SMIX73(this, arg0);
}	

void focusOutEvent_fromDBase(QFocusEvent* arg0) {
	return QLineEdit::focusOutEvent(arg0);
}	
void focusOutEvent(QFocusEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_focusOutEvent_SMIX74(this, arg0);
}	

void paintEvent_fromDBase(QPaintEvent* arg0) {
	return QLineEdit::paintEvent(arg0);
}	
void paintEvent(QPaintEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_paintEvent_SMIX75(this, arg0);
}	

void dragEnterEvent_fromDBase(QDragEnterEvent* arg0) {
	return QLineEdit::dragEnterEvent(arg0);
}	
void dragEnterEvent(QDragEnterEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_dragEnterEvent_SMIX76(this, arg0);
}	

void dragMoveEvent_fromDBase(QDragMoveEvent* e) {
	return QLineEdit::dragMoveEvent(e);
}	
void dragMoveEvent(QDragMoveEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_dragMoveEvent_SMIX77(this, e);
}	

void dragLeaveEvent_fromDBase(QDragLeaveEvent* e) {
	return QLineEdit::dragLeaveEvent(e);
}	
void dragLeaveEvent(QDragLeaveEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_dragLeaveEvent_SMIX78(this, e);
}	

void dropEvent_fromDBase(QDropEvent* arg0) {
	return QLineEdit::dropEvent(arg0);
}	
void dropEvent(QDropEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_dropEvent_SMIX79(this, arg0);
}	

void changeEvent_fromDBase(QEvent* arg0) {
	return QLineEdit::changeEvent(arg0);
}	
void changeEvent(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_changeEvent_SMIX80(this, arg0);
}	

void contextMenuEvent_fromDBase(QContextMenuEvent* arg0) {
	return QLineEdit::contextMenuEvent(arg0);
}	
void contextMenuEvent(QContextMenuEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_contextMenuEvent_SMIX81(this, arg0);
}	

void inputMethodEvent_fromDBase(QInputMethodEvent* arg0) {
	return QLineEdit::inputMethodEvent(arg0);
}	
void inputMethodEvent(QInputMethodEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLineEdit_inputMethodEvent_SMIX82(this, arg0);
}	

QRect cursorRect_fromDBase() {
	return QLineEdit::cursorRect();
}
bool event_fromDBase(QEvent* arg0) {
	return QLineEdit::event(arg0);
}	
bool event(QEvent* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QLineEdit_event_SMIX86(this, arg0);
	return retValue;
}	


// Destructor
~QLineEdit_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QLineEdit_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QLineEdit_SMI* QLineEdit_QLineEdit_SMIX4(QWidget* parent) {
	
	QLineEdit_SMI* obj = QLineEdit_SMI::SMIMake_QLineEdit(parent);
	return obj;
}


extern "C" QLineEdit_SMI* QLineEdit_QLineEdit_SMIX5(char* contents___SMI, QWidget* parent) {
	QString contents = convertPCharToQString(contents___SMI);

	QLineEdit_SMI* obj = QLineEdit_SMI::SMIMake_QLineEdit(contents, parent);
	return obj;
}


extern "C" char* QLineEdit_text_SMIX7(QLineEdit* self)  {

	QString retValue = self->text();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" char* QLineEdit_displayText_SMIX8(QLineEdit* self)  {

	QString retValue = self->displayText();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" int QLineEdit_maxLength_SMIX9(QLineEdit* self) {

	int retValue = self->maxLength();
	return retValue;

}

extern "C" void QLineEdit_setMaxLength_SMIX10(QLineEdit* self, int arg0) {

	self->setMaxLength(arg0);

}

extern "C" void QLineEdit_setFrame_SMIX11(QLineEdit* self, bool arg0) {

	self->setFrame(arg0);

}

extern "C" bool QLineEdit_hasFrame_SMIX12(QLineEdit* self) {

	bool retValue = self->hasFrame();
	return retValue;

}

extern "C" bool QLineEdit_isReadOnly_SMIX16(QLineEdit* self) {

	bool retValue = self->isReadOnly();
	return retValue;

}

extern "C" void QLineEdit_setReadOnly_SMIX17(QLineEdit* self, bool arg0) {

	self->setReadOnly(arg0);

}

extern "C" QSize* QLineEdit_sizeHint_SMIX20(QLineEdit* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QLineEdit_SMI*) self)->sizeHint_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->sizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" QSize* QLineEdit_minimumSizeHint_SMIX21(QLineEdit* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QLineEdit_SMI*) self)->minimumSizeHint_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->minimumSizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" int QLineEdit_cursorPosition_SMIX22(QLineEdit* self) {

	int retValue = self->cursorPosition();
	return retValue;

}

extern "C" void QLineEdit_setCursorPosition_SMIX23(QLineEdit* self, int arg0) {

	self->setCursorPosition(arg0);

}

extern "C" int QLineEdit_cursorPositionAt_SMIX24(QLineEdit* self, const QPoint& pos) {

	int retValue = self->cursorPositionAt(pos);
	return retValue;

}

extern "C" void QLineEdit_cursorForward_SMIX27(QLineEdit* self, bool mark, int steps) {

	self->cursorForward(mark, steps);

}

extern "C" void QLineEdit_cursorBackward_SMIX28(QLineEdit* self, bool mark, int steps) {

	self->cursorBackward(mark, steps);

}

extern "C" void QLineEdit_cursorWordForward_SMIX29(QLineEdit* self, bool mark) {

	self->cursorWordForward(mark);

}

extern "C" void QLineEdit_cursorWordBackward_SMIX30(QLineEdit* self, bool mark) {

	self->cursorWordBackward(mark);

}

extern "C" void QLineEdit_backspace_SMIX31(QLineEdit* self) {

	self->backspace();

}

extern "C" void QLineEdit_del_SMIX32(QLineEdit* self) {

	self->del();

}

extern "C" void QLineEdit_home_SMIX33(QLineEdit* self, bool mark) {

	self->home(mark);

}

extern "C" void QLineEdit_end_SMIX34(QLineEdit* self, bool mark) {

	self->end(mark);

}

extern "C" bool QLineEdit_isModified_SMIX35(QLineEdit* self) {

	bool retValue = self->isModified();
	return retValue;

}

extern "C" void QLineEdit_setModified_SMIX36(QLineEdit* self, bool arg0) {

	self->setModified(arg0);

}

extern "C" void QLineEdit_setSelection_SMIX37(QLineEdit* self, int arg0, int arg1) {

	self->setSelection(arg0, arg1);

}

extern "C" bool QLineEdit_hasSelectedText_SMIX38(QLineEdit* self) {

	bool retValue = self->hasSelectedText();
	return retValue;

}

extern "C" char* QLineEdit_selectedText_SMIX39(QLineEdit* self)  {

	QString retValue = self->selectedText();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" int QLineEdit_selectionStart_SMIX40(QLineEdit* self) {

	int retValue = self->selectionStart();
	return retValue;

}

extern "C" bool QLineEdit_isUndoAvailable_SMIX41(QLineEdit* self) {

	bool retValue = self->isUndoAvailable();
	return retValue;

}

extern "C" bool QLineEdit_isRedoAvailable_SMIX42(QLineEdit* self) {

	bool retValue = self->isRedoAvailable();
	return retValue;

}

extern "C" void QLineEdit_setDragEnabled_SMIX43(QLineEdit* self, bool b) {

	self->setDragEnabled(b);

}

extern "C" bool QLineEdit_dragEnabled_SMIX44(QLineEdit* self) {

	bool retValue = self->dragEnabled();
	return retValue;

}

extern "C" char* QLineEdit_inputMask_SMIX45(QLineEdit* self)  {

	QString retValue = self->inputMask();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QLineEdit_setInputMask_SMIX46(QLineEdit* self, char* inputMask___SMI) {
	QString inputMask = convertPCharToQString(inputMask___SMI);

	self->setInputMask(inputMask);

}

extern "C" bool QLineEdit_hasAcceptableInput_SMIX47(QLineEdit* self) {

	bool retValue = self->hasAcceptableInput();
	return retValue;

}

extern "C" void QLineEdit_setText_SMIX48(QLineEdit* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->setText(arg0);

}

extern "C" void QLineEdit_clear_SMIX49(QLineEdit* self) {

	self->clear();

}

extern "C" void QLineEdit_selectAll_SMIX50(QLineEdit* self) {

	self->selectAll();

}

extern "C" void QLineEdit_undo_SMIX51(QLineEdit* self) {

	self->undo();

}

extern "C" void QLineEdit_redo_SMIX52(QLineEdit* self) {

	self->redo();

}

extern "C" void QLineEdit_cut_SMIX53(QLineEdit* self) {

	self->cut();

}

extern "C" void QLineEdit_copy_SMIX54(QLineEdit* self) {

	self->copy();

}

extern "C" void QLineEdit_paste_SMIX55(QLineEdit* self) {

	self->paste();

}

extern "C" void QLineEdit_deselect_SMIX56(QLineEdit* self) {

	self->deselect();

}

extern "C" void QLineEdit_insert_SMIX57(QLineEdit* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->insert(arg0);

}

extern "C" void QLineEdit_mousePressEvent_SMIX68(QLineEdit* self, QMouseEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->mousePressEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_mouseMoveEvent_SMIX69(QLineEdit* self, QMouseEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->mouseMoveEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_mouseReleaseEvent_SMIX70(QLineEdit* self, QMouseEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->mouseReleaseEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_mouseDoubleClickEvent_SMIX71(QLineEdit* self, QMouseEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->mouseDoubleClickEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_keyPressEvent_SMIX72(QLineEdit* self, QKeyEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->keyPressEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_focusInEvent_SMIX73(QLineEdit* self, QFocusEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->focusInEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_focusOutEvent_SMIX74(QLineEdit* self, QFocusEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->focusOutEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_paintEvent_SMIX75(QLineEdit* self, QPaintEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->paintEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_dragEnterEvent_SMIX76(QLineEdit* self, QDragEnterEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->dragEnterEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_dragMoveEvent_SMIX77(QLineEdit* self, QDragMoveEvent* e) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->dragMoveEvent_fromDBase(e);
	}

}

extern "C" void QLineEdit_dragLeaveEvent_SMIX78(QLineEdit* self, QDragLeaveEvent* e) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->dragLeaveEvent_fromDBase(e);
	}

}

extern "C" void QLineEdit_dropEvent_SMIX79(QLineEdit* self, QDropEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->dropEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_changeEvent_SMIX80(QLineEdit* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->changeEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_contextMenuEvent_SMIX81(QLineEdit* self, QContextMenuEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->contextMenuEvent_fromDBase(arg0);
	}

}

extern "C" void QLineEdit_inputMethodEvent_SMIX82(QLineEdit* self, QInputMethodEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLineEdit_SMI*) self)->inputMethodEvent_fromDBase(arg0);
	}

}

extern "C" QRect* QLineEdit_cursorRect_SMIX83(QLineEdit* self) {

	if (isCreatedByD(self))  {
	QRect retValue = (( QLineEdit_SMI*) self)->cursorRect_fromDBase();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;
	}

}

extern "C" bool QLineEdit_event_SMIX86(QLineEdit* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	bool retValue = (( QLineEdit_SMI*) self)->event_fromDBase(arg0);
	return retValue;
	} else {
	bool retValue = self->event(arg0);
	return retValue;
	}

}

extern "C" void QLineEdit_setTextMargins_SMIX89(QLineEdit* self, int left, int top, int right, int bottom) {

	self->setTextMargins(left, top, right, bottom);

}

extern "C" void QLineEdit_getTextMargins_SMIX90(QLineEdit* self, int* left, int* top, int* right, int* bottom) {

	self->getTextMargins(left, top, right, bottom);

}

extern "C" char* QLineEdit_placeholderText_SMIX93(QLineEdit* self)  {

	QString retValue = self->placeholderText();
	char* convertedRetValue = convertQStringToPChar(retValue);
	return convertedRetValue;

}

extern "C" void QLineEdit_setPlaceholderText_SMIX94(QLineEdit* self, char* arg0___SMI) {
	QString arg0 = convertPCharToQString(arg0___SMI);

	self->setPlaceholderText(arg0);

}

extern "C" void QLineEdit_setCursorMoveStyle_SMIX95(QLineEdit* self, int style___SMI) {
	Qt::CursorMoveStyle style = (Qt::CursorMoveStyle) style___SMI;

	self->setCursorMoveStyle(style);

}

extern "C" int QLineEdit_cursorMoveStyle_SMIX96(QLineEdit* self)  {

	Qt::CursorMoveStyle retValue = self->cursorMoveStyle();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QLineEdit_CPPObject(QLineEdit* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QLineEdit_SMI_CPPObject(QLineEdit_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QLineEdit
