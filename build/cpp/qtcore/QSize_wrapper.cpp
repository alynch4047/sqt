
/*
* CPP Wrapper for QSize
*/

#include <instance_tracker.h>

#include <qsize.h>

// Headers for converters


// Externs for converters
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QSize_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QSize_SMI: QSize {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QSize_SMI* SMIMake_QSize() {
	QSize_SMI* retVal = new QSize_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QSize_SMI(): QSize() {inhibitDestructorCallbackToD = false;};


public:
	
static QSize_SMI* SMIMake_QSize(int w, int h) {
	QSize_SMI* retVal = new QSize_SMI(w, h);
	registerDInstance(retVal);
	return retVal;
};

private:
    QSize_SMI(int w, int h): QSize(w, h) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QSize_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QSize_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" void QSize_transpose_SMIX3(QSize* self) {

	self->transpose();

}

extern "C" void QSize_scale_SMIX4(QSize* self, const QSize& s, int mode___SMI) {
	Qt::AspectRatioMode mode = (Qt::AspectRatioMode) mode___SMI;

	self->scale(s, mode);

}

extern "C" QSize_SMI* QSize_QSize_SMIX5() {
	
	QSize_SMI* obj = QSize_SMI::SMIMake_QSize();
	return obj;
}


extern "C" QSize_SMI* QSize_QSize_SMIX6(int w, int h) {
	
	QSize_SMI* obj = QSize_SMI::SMIMake_QSize(w, h);
	return obj;
}


extern "C" bool QSize_isNull_SMIX9(QSize* self) {

	bool retValue = self->isNull();
	return retValue;

}

extern "C" bool QSize_isEmpty_SMIX10(QSize* self) {

	bool retValue = self->isEmpty();
	return retValue;

}

extern "C" bool QSize_isValid_SMIX11(QSize* self) {

	bool retValue = self->isValid();
	return retValue;

}

extern "C" int QSize_width_SMIX14(QSize* self) {

	int retValue = self->width();
	return retValue;

}

extern "C" int QSize_height_SMIX15(QSize* self) {

	int retValue = self->height();
	return retValue;

}

extern "C" void QSize_setWidth_SMIX16(QSize* self, int w) {

	self->setWidth(w);

}

extern "C" void QSize_setHeight_SMIX17(QSize* self, int h) {

	self->setHeight(h);

}

extern "C" void QSize_scale_SMIX18(QSize* self, int w, int h, int mode___SMI) {
	Qt::AspectRatioMode mode = (Qt::AspectRatioMode) mode___SMI;

	self->scale(w, h, mode);

}

extern "C" QSize& QSize_operatorplusequals_SMIX19(QSize* self, const QSize& s) {

	QSize& retValue = self->operator+=(s);
	return retValue;

}

extern "C" QSize& QSize_operatorminusequals_SMIX20(QSize* self, const QSize& s) {

	QSize& retValue = self->operator-=(s);
	return retValue;

}

extern "C" QSize* QSize_expandedTo_SMIX23(QSize* self, const QSize& otherSize) {

	QSize retValue = self->expandedTo(otherSize);
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QSize* QSize_boundedTo_SMIX24(QSize* self, const QSize& otherSize) {

	QSize retValue = self->boundedTo(otherSize);
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QSize* QSize_scaled_SMIX25(QSize* self, const QSize& s, int mode___SMI) {
	Qt::AspectRatioMode mode = (Qt::AspectRatioMode) mode___SMI;

	QSize retValue = self->scaled(s, mode);
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QSize* QSize_scaled_SMIX26(QSize* self, int w, int h, int mode___SMI) {
	Qt::AspectRatioMode mode = (Qt::AspectRatioMode) mode___SMI;

	QSize retValue = self->scaled(w, h, mode);
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QSize* QSize_transposed_SMIX27(QSize* self) {

	QSize retValue = self->transposed();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QSize_CPPObject(QSize* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QSize_SMI_CPPObject(QSize_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QSize
