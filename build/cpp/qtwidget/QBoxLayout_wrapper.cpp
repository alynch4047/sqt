
/*
* CPP Wrapper for QBoxLayout
*/

#include <instance_tracker.h>

#include <qboxlayout.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" QSize* SMID_QBoxLayout_sizeHint_SMIX19(void* wrappedObject);
extern "C" QSize* SMID_QBoxLayout_minimumSize_SMIX20(void* wrappedObject);
extern "C" QSize* SMID_QBoxLayout_maximumSize_SMIX21(void* wrappedObject);
extern "C" bool SMID_QBoxLayout_hasHeightForWidth_SMIX22(void* wrappedObject);
extern "C" int SMID_QBoxLayout_heightForWidth_SMIX23(void* wrappedObject, int arg0);
extern "C" int SMID_QBoxLayout_minimumHeightForWidth_SMIX24(void* wrappedObject, int arg0);
extern "C" void SMID_QBoxLayout_invalidate_SMIX26(void* wrappedObject);
extern "C" int SMID_QBoxLayout_count_SMIX29(void* wrappedObject);
extern "C" void SMID_QBoxLayout_setGeometry_SMIX30(void* wrappedObject, const QRect& arg0);
extern "C" void SMID_QBoxLayout_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QBoxLayout_SMI: QBoxLayout {

public:
	bool inhibitDestructorCallbackToD;

// Constructors



// Protected and virtual method calls
public:

QSize sizeHint_fromDBase() {
	return QBoxLayout::sizeHint();
}	
QSize sizeHint() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QBoxLayout_sizeHint_SMIX19(this);
	return *((QSize*) retValue);
}	

QSize minimumSize_fromDBase() {
	return QBoxLayout::minimumSize();
}	
QSize minimumSize() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QBoxLayout_minimumSize_SMIX20(this);
	return *((QSize*) retValue);
}	

QSize maximumSize_fromDBase() {
	return QBoxLayout::maximumSize();
}	
QSize maximumSize() {
	// This can only be called from a C++ instance, never from a D instance
	
	void* retValue = SMID_QBoxLayout_maximumSize_SMIX21(this);
	return *((QSize*) retValue);
}	

bool hasHeightForWidth_fromDBase() {
	return QBoxLayout::hasHeightForWidth();
}	
bool hasHeightForWidth() {
	// This can only be called from a C++ instance, never from a D instance
	
	bool retValue = SMID_QBoxLayout_hasHeightForWidth_SMIX22(this);
	return retValue;
}	

int heightForWidth_fromDBase(int arg0) {
	return QBoxLayout::heightForWidth(arg0);
}	
int heightForWidth(int arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	int retValue = SMID_QBoxLayout_heightForWidth_SMIX23(this, arg0);
	return retValue;
}	

int minimumHeightForWidth_fromDBase(int arg0) {
	return QBoxLayout::minimumHeightForWidth(arg0);
}	
int minimumHeightForWidth(int arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	int retValue = SMID_QBoxLayout_minimumHeightForWidth_SMIX24(this, arg0);
	return retValue;
}	

void invalidate_fromDBase() {
	return QBoxLayout::invalidate();
}	
void invalidate() {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QBoxLayout_invalidate_SMIX26(this);
}	

int count_fromDBase() {
	return QBoxLayout::count();
}	
int count() {
	// This can only be called from a C++ instance, never from a D instance
	
	int retValue = SMID_QBoxLayout_count_SMIX29(this);
	return retValue;
}	

void setGeometry_fromDBase(const QRect& arg0) {
	return QBoxLayout::setGeometry(arg0);
}	
void setGeometry(const QRect& arg0) {
	// This can only be called from a C++ instance, never from a D instance
	
	SMID_QBoxLayout_setGeometry_SMIX30(this, arg0);
}	


// Destructor
~QBoxLayout_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QBoxLayout_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" void QBoxLayout_addSpacing_SMIX7(QBoxLayout* self, int size) {

	self->addSpacing(size);

}

extern "C" void QBoxLayout_addStretch_SMIX8(QBoxLayout* self, int stretch) {

	self->addStretch(stretch);

}

extern "C" void QBoxLayout_addLayout_SMIX10(QBoxLayout* self, QLayout* layout, int stretch) {

	self->addLayout(layout, stretch);

}

extern "C" void QBoxLayout_addStrut_SMIX11(QBoxLayout* self, int arg0) {

	self->addStrut(arg0);

}

extern "C" void QBoxLayout_insertSpacing_SMIX13(QBoxLayout* self, int index, int size) {

	self->insertSpacing(index, size);

}

extern "C" void QBoxLayout_insertStretch_SMIX14(QBoxLayout* self, int index, int stretch) {

	self->insertStretch(index, stretch);

}

extern "C" void QBoxLayout_insertLayout_SMIX16(QBoxLayout* self, int index, QLayout* layout, int stretch) {

	self->insertLayout(index, layout, stretch);

}

extern "C" bool QBoxLayout_setStretchFactor_SMIX17(QBoxLayout* self, QWidget* w, int stretch) {

	bool retValue = self->setStretchFactor(w, stretch);
	return retValue;

}

extern "C" bool QBoxLayout_setStretchFactor_SMIX18(QBoxLayout* self, QLayout* l, int stretch) {

	bool retValue = self->setStretchFactor(l, stretch);
	return retValue;

}

extern "C" QSize* QBoxLayout_sizeHint_SMIX19(QBoxLayout* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QBoxLayout_SMI*) self)->sizeHint_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->sizeHint();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" QSize* QBoxLayout_minimumSize_SMIX20(QBoxLayout* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QBoxLayout_SMI*) self)->minimumSize_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->minimumSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" QSize* QBoxLayout_maximumSize_SMIX21(QBoxLayout* self) {

	if (isCreatedByD(self))  {
	QSize retValue = (( QBoxLayout_SMI*) self)->maximumSize_fromDBase();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	} else {
	QSize retValue = self->maximumSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;
	}

}

extern "C" bool QBoxLayout_hasHeightForWidth_SMIX22(QBoxLayout* self) {

	if (isCreatedByD(self))  {
	bool retValue = (( QBoxLayout_SMI*) self)->hasHeightForWidth_fromDBase();
	return retValue;
	} else {
	bool retValue = self->hasHeightForWidth();
	return retValue;
	}

}

extern "C" int QBoxLayout_heightForWidth_SMIX23(QBoxLayout* self, int arg0) {

	if (isCreatedByD(self))  {
	int retValue = (( QBoxLayout_SMI*) self)->heightForWidth_fromDBase(arg0);
	return retValue;
	} else {
	int retValue = self->heightForWidth(arg0);
	return retValue;
	}

}

extern "C" int QBoxLayout_minimumHeightForWidth_SMIX24(QBoxLayout* self, int arg0) {

	if (isCreatedByD(self))  {
	int retValue = (( QBoxLayout_SMI*) self)->minimumHeightForWidth_fromDBase(arg0);
	return retValue;
	} else {
	int retValue = self->minimumHeightForWidth(arg0);
	return retValue;
	}

}

extern "C" void QBoxLayout_invalidate_SMIX26(QBoxLayout* self) {

	if (isCreatedByD(self))  {
	(( QBoxLayout_SMI*) self)->invalidate_fromDBase();
	} else {
	self->invalidate();
	}

}

extern "C" int QBoxLayout_count_SMIX29(QBoxLayout* self) {

	if (isCreatedByD(self))  {
	int retValue = (( QBoxLayout_SMI*) self)->count_fromDBase();
	return retValue;
	} else {
	int retValue = self->count();
	return retValue;
	}

}

extern "C" void QBoxLayout_setGeometry_SMIX30(QBoxLayout* self, const QRect& arg0) {

	if (isCreatedByD(self))  {
	(( QBoxLayout_SMI*) self)->setGeometry_fromDBase(arg0);
	} else {
	self->setGeometry(arg0);
	}

}

extern "C" int QBoxLayout_spacing_SMIX31(QBoxLayout* self) {

	int retValue = self->spacing();
	return retValue;

}

extern "C" void QBoxLayout_setSpacing_SMIX32(QBoxLayout* self, int spacing) {

	self->setSpacing(spacing);

}

extern "C" void QBoxLayout_setStretch_SMIX35(QBoxLayout* self, int index, int stretch) {

	self->setStretch(index, stretch);

}

extern "C" int QBoxLayout_stretch_SMIX36(QBoxLayout* self, int index) {

	int retValue = self->stretch(index);
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QBoxLayout_CPPObject(QBoxLayout* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QBoxLayout_SMI_CPPObject(QBoxLayout_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QBoxLayout
