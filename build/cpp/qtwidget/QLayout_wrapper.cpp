
/*
* CPP Wrapper for QLayout
*/

#include <instance_tracker.h>

#include <qlayout.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QLayout_invalidate_SMIX16(void* wrappedObject);
extern "C" QRect* SMID_QLayout_geometry_SMIX17(void* wrappedObject);
extern "C" QSize* SMID_QLayout_minimumSize_SMIX25(void* wrappedObject);
extern "C" QSize* SMID_QLayout_maximumSize_SMIX26(void* wrappedObject);
extern "C" void SMID_QLayout_setGeometry_SMIX27(void* wrappedObject, const QRect& arg0);
extern "C" int SMID_QLayout_indexOf_SMIX30(void* wrappedObject, QWidget* arg0);
extern "C" bool SMID_QLayout_isEmpty_SMIX32(void* wrappedObject);
extern "C" QLayout* SMID_QLayout_layout_SMIX37(void* wrappedObject);
extern "C" void SMID_QLayout_childEvent_SMIX43(void* wrappedObject, QChildEvent* e);
extern "C" void SMID_QLayout_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QLayout_SMI: QLayout {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:

void invalidate_fromDBase() {
	return QLayout::invalidate();
}	
void invalidate() {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLayout_invalidate_SMIX16(this);
}	

QRect geometry_fromDBase() {
	return QLayout::geometry();
}	
QRect geometry() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QLayout_geometry_SMIX17(this);
	return *((QRect*) retValue);
}	

QSize minimumSize_fromDBase() {
	return QLayout::minimumSize();
}	
QSize minimumSize() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QLayout_minimumSize_SMIX25(this);
	return *((QSize*) retValue);
}	

QSize maximumSize_fromDBase() {
	return QLayout::maximumSize();
}	
QSize maximumSize() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QLayout_maximumSize_SMIX26(this);
	return *((QSize*) retValue);
}	

void setGeometry_fromDBase(const QRect& arg0) {
	return QLayout::setGeometry(arg0);
}	
void setGeometry(const QRect& arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLayout_setGeometry_SMIX27(this, arg0);
}	

int indexOf_fromDBase(QWidget* arg0) {
	return QLayout::indexOf(arg0);
}	
int indexOf(QWidget* arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	int retValue = SMID_QLayout_indexOf_SMIX30(this, arg0);
	return retValue;
}	

bool isEmpty_fromDBase() {
	return QLayout::isEmpty();
}	
bool isEmpty() {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QLayout_isEmpty_SMIX32(this);
	return retValue;
}	

QLayout* layout_fromDBase() {
	return QLayout::layout();
}	
QLayout* layout() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QLayout_layout_SMIX37(this);
	return (QLayout*) retValue;
}	

void widgetEvent_fromDBase(QEvent* arg0) {
	return QLayout::widgetEvent(arg0);
}
void childEvent_fromDBase(QChildEvent* e) {
	return QLayout::childEvent(e);
}	
void childEvent(QChildEvent* e) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QLayout_childEvent_SMIX43(this, e);
}	

void addChildLayout_fromDBase(QLayout* l) {
	return QLayout::addChildLayout(l);
}
void addChildWidget_fromDBase(QWidget* w) {
	return QLayout::addChildWidget(w);
}
QRect alignmentRect_fromDBase(const QRect& arg0) {
	return QLayout::alignmentRect(arg0);
}

// Destructor
~QLayout_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QLayout_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" int QLayout_spacing_SMIX6(QLayout* self) {

	int retValue = self->spacing();
	return retValue;

}

extern "C" void QLayout_setSpacing_SMIX7(QLayout* self, int arg0) {

	self->setSpacing(arg0);

}

extern "C" void QLayout_setMenuBar_SMIX13(QLayout* self, QWidget* w) {

	self->setMenuBar(w);

}

extern "C" QWidget* QLayout_menuBar_SMIX14(QLayout* self) {

	QWidget* retValue = self->menuBar();
	return retValue;

}

extern "C" QWidget* QLayout_parentWidget_SMIX15(QLayout* self) {

	QWidget* retValue = self->parentWidget();
	return retValue;

}

extern "C" void QLayout_invalidate_SMIX16(QLayout* self) {

	if (isCreatedByD(self))  {
	(( QLayout_SMI*) self)->invalidate_fromDBase();
	} else {
	self->invalidate();
	}

}

extern "C" QRect* QLayout_geometry_SMIX17(QLayout* self) {

	if (isCreatedByD(self))  {
	QRect retValue = (( QLayout_SMI*) self)->geometry_fromDBase();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;
	} else {
	QRect retValue = self->geometry();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;
	}

}

extern "C" bool QLayout_activate_SMIX18(QLayout* self) {

	bool retValue = self->activate();
	return retValue;

}

extern "C" void QLayout_update_SMIX19(QLayout* self) {

	self->update();

}

extern "C" void QLayout_addWidget_SMIX20(QLayout* self, QWidget* w) {

	self->addWidget(w);

}

extern "C" void QLayout_removeWidget_SMIX22(QLayout* self, QWidget* w) {

	self->removeWidget(w);

}

extern "C" QSize* QLayout_minimumSize_SMIX25(QLayout* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QLayout_SMI*) self)->minimumSize_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->minimumSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" QSize* QLayout_maximumSize_SMIX26(QLayout* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QLayout_SMI*) self)->maximumSize_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->maximumSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" void QLayout_setGeometry_SMIX27(QLayout* self, const QRect& arg0) {

	if (isCreatedByD(self))  {
	(( QLayout_SMI*) self)->setGeometry_fromDBase(arg0);
	} else {
	self->setGeometry(arg0);
	}

}

extern "C" int QLayout_indexOf_SMIX30(QLayout* self, QWidget* arg0) {

	if (isCreatedByD(self))  {
	int retValue = (( QLayout_SMI*) self)->indexOf_fromDBase(arg0);
	return retValue;
	} else {
	int retValue = self->indexOf(arg0);
	return retValue;
	}

}

extern "C" bool QLayout_isEmpty_SMIX32(QLayout* self) {

	if (isCreatedByD(self))  {
	bool retValue = (( QLayout_SMI*) self)->isEmpty_fromDBase();
	return retValue;
	} else {
	bool retValue = self->isEmpty();
	return retValue;
	}

}

extern "C" int QLayout_totalHeightForWidth_SMIX33(QLayout* self, int w) {

	int retValue = self->totalHeightForWidth(w);
	return retValue;

}

extern "C" QSize* QLayout_totalMinimumSize_SMIX34(QLayout* self) {

	QSize retValue = self->totalMinimumSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QSize* QLayout_totalMaximumSize_SMIX35(QLayout* self) {

	QSize retValue = self->totalMaximumSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QSize* QLayout_totalSizeHint_SMIX36(QLayout* self) {

	QSize retValue = self->totalSizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QLayout* QLayout_layout_SMIX37(QLayout* self) {

	if (isCreatedByD(self))  {
	QLayout* retValue = (( QLayout_SMI*) self)->layout_fromDBase();
	return retValue;
	} else {
	QLayout* retValue = self->layout();
	return retValue;
	}

}

extern "C" void QLayout_setEnabled_SMIX38(QLayout* self, bool arg0) {

	self->setEnabled(arg0);

}

extern "C" bool QLayout_isEnabled_SMIX39(QLayout* self) {

	bool retValue = self->isEnabled();
	return retValue;

}

extern "C" QSize* QLayout_closestAcceptableSize_SMIX40(const QWidget* w, const QSize& s) {

	QSize retValue = QLayout::closestAcceptableSize(w, s);
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" void QLayout_widgetEvent_SMIX42(QLayout* self, QEvent* arg0) {

	if (isCreatedByD(self))  {
	(( QLayout_SMI*) self)->widgetEvent_fromDBase(arg0);
	}

}

extern "C" void QLayout_childEvent_SMIX43(QLayout* self, QChildEvent* e) {

	if (isCreatedByD(self))  {
	(( QLayout_SMI*) self)->childEvent_fromDBase(e);
	}

}

extern "C" void QLayout_addChildLayout_SMIX44(QLayout* self, QLayout* l) {

	if (isCreatedByD(self))  {
	(( QLayout_SMI*) self)->addChildLayout_fromDBase(l);
	}

}

extern "C" void QLayout_addChildWidget_SMIX45(QLayout* self, QWidget* w) {

	if (isCreatedByD(self))  {
	(( QLayout_SMI*) self)->addChildWidget_fromDBase(w);
	}

}

extern "C" QRect* QLayout_alignmentRect_SMIX46(QLayout* self, const QRect& arg0) {

	if (isCreatedByD(self))  {
	QRect retValue = (( QLayout_SMI*) self)->alignmentRect_fromDBase(arg0);
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;
	}

}

extern "C" void QLayout_setContentsMargins_SMIX48(QLayout* self, int left, int top, int right, int bottom) {

	self->setContentsMargins(left, top, right, bottom);

}

extern "C" void QLayout_getContentsMargins_SMIX49(QLayout* self, int* left, int* top, int* right, int* bottom) {

	self->getContentsMargins(left, top, right, bottom);

}

extern "C" QRect* QLayout_contentsRect_SMIX50(QLayout* self) {

	QRect retValue = self->contentsRect();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QLayout_CPPObject(QLayout* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QLayout_SMI_CPPObject(QLayout_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QLayout
