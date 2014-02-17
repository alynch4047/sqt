
/*
* CPP Wrapper for QSizeF
*/

#include <instance_tracker.h>

#include <qsize.h>

// Headers for converters


// Externs for converters
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QSizeF_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QSizeF_SMI: QSizeF {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QSizeF_SMI* SMIMake_QSizeF() {
	QSizeF_SMI* retVal = new QSizeF_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QSizeF_SMI(): QSizeF() {inhibitDestructorCallbackToD = false;};


public:
	
static QSizeF_SMI* SMIMake_QSizeF(const QSize& sz) {
	QSizeF_SMI* retVal = new QSizeF_SMI(sz);
	registerDInstance(retVal);
	return retVal;
};

private:
    QSizeF_SMI(const QSize& sz): QSizeF(sz) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QSizeF_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QSizeF_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" void QSizeF_transpose_SMIX3(QSizeF* self) {

	self->transpose();

}

extern "C" void QSizeF_scale_SMIX4(QSizeF* self, const QSizeF& s, int mode___SMI) {
	Qt::AspectRatioMode mode = (Qt::AspectRatioMode) mode___SMI;

	self->scale(s, mode);

}

extern "C" QSizeF_SMI* QSizeF_QSizeF_SMIX5() {
	
	QSizeF_SMI* obj = QSizeF_SMI::SMIMake_QSizeF();
	return obj;
}


extern "C" QSizeF_SMI* QSizeF_QSizeF_SMIX6(const QSize& sz) {
	
	QSizeF_SMI* obj = QSizeF_SMI::SMIMake_QSizeF(sz);
	return obj;
}


extern "C" bool QSizeF_isNull_SMIX10(QSizeF* self) {

	bool retValue = self->isNull();
	return retValue;

}

extern "C" bool QSizeF_isEmpty_SMIX11(QSizeF* self) {

	bool retValue = self->isEmpty();
	return retValue;

}

extern "C" bool QSizeF_isValid_SMIX12(QSizeF* self) {

	bool retValue = self->isValid();
	return retValue;

}

extern "C" QSizeF& QSizeF_operatorplusequals_SMIX20(QSizeF* self, const QSizeF& s) {

	QSizeF& retValue = self->operator+=(s);
	return retValue;

}

extern "C" QSizeF& QSizeF_operatorminusequals_SMIX21(QSizeF* self, const QSizeF& s) {

	QSizeF& retValue = self->operator-=(s);
	return retValue;

}

extern "C" QSizeF* QSizeF_expandedTo_SMIX24(QSizeF* self, const QSizeF& otherSize) {

	QSizeF retValue = self->expandedTo(otherSize);
	QSizeF* copiedRetValue = new QSizeF(retValue);
	return copiedRetValue;

}

extern "C" QSizeF* QSizeF_boundedTo_SMIX25(QSizeF* self, const QSizeF& otherSize) {

	QSizeF retValue = self->boundedTo(otherSize);
	QSizeF* copiedRetValue = new QSizeF(retValue);
	return copiedRetValue;

}

extern "C" QSize* QSizeF_toSize_SMIX26(QSizeF* self) {

	QSize retValue = self->toSize();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" QSizeF* QSizeF_scaled_SMIX27(QSizeF* self, const QSizeF& s, int mode___SMI) {
	Qt::AspectRatioMode mode = (Qt::AspectRatioMode) mode___SMI;

	QSizeF retValue = self->scaled(s, mode);
	QSizeF* copiedRetValue = new QSizeF(retValue);
	return copiedRetValue;

}

extern "C" QSizeF* QSizeF_transposed_SMIX29(QSizeF* self) {

	QSizeF retValue = self->transposed();
	QSizeF* copiedRetValue = new QSizeF(retValue);
	return copiedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QSizeF_CPPObject(QSizeF* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QSizeF_SMI_CPPObject(QSizeF_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QSizeF
