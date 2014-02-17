
/*
* CPP Wrapper for QPointF
*/

#include <instance_tracker.h>

#include <qpoint.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QPointF_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QPointF_SMI: QPointF {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QPointF_SMI* SMIMake_QPointF() {
	QPointF_SMI* retVal = new QPointF_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QPointF_SMI(): QPointF() {inhibitDestructorCallbackToD = false;};


public:
	
static QPointF_SMI* SMIMake_QPointF(const QPoint& p) {
	QPointF_SMI* retVal = new QPointF_SMI(p);
	registerDInstance(retVal);
	return retVal;
};

private:
    QPointF_SMI(const QPoint& p): QPointF(p) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QPointF_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QPointF_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPointF_SMI* QPointF_QPointF_SMIX4() {
	
	QPointF_SMI* obj = QPointF_SMI::SMIMake_QPointF();
	return obj;
}


extern "C" QPointF_SMI* QPointF_QPointF_SMIX6(const QPoint& p) {
	
	QPointF_SMI* obj = QPointF_SMI::SMIMake_QPointF(p);
	return obj;
}


extern "C" bool QPointF_isNull_SMIX9(QPointF* self) {

	bool retValue = self->isNull();
	return retValue;

}

extern "C" QPointF& QPointF_operatorplusequals_SMIX16(QPointF* self, const QPointF& p) {

	QPointF& retValue = self->operator+=(p);
	return retValue;

}

extern "C" QPointF& QPointF_operatorminusequals_SMIX17(QPointF* self, const QPointF& p) {

	QPointF& retValue = self->operator-=(p);
	return retValue;

}

extern "C" QPoint* QPointF_toPoint_SMIX20(QPointF* self) {

	QPoint retValue = self->toPoint();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QPointF_CPPObject(QPointF* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QPointF_SMI_CPPObject(QPointF_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QPointF
