
/*
* CPP Wrapper for QLineF
*/

#include <instance_tracker.h>

#include <qline.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QLineF_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QLineF_SMI: QLineF {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QLineF_SMI* SMIMake_QLineF(const QLine& line) {
	QLineF_SMI* retVal = new QLineF_SMI(line);
	registerDInstance(retVal);
	return retVal;
};

private:
    QLineF_SMI(const QLine& line): QLineF(line) {inhibitDestructorCallbackToD = false;};


public:
	
static QLineF_SMI* SMIMake_QLineF() {
	QLineF_SMI* retVal = new QLineF_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QLineF_SMI(): QLineF() {inhibitDestructorCallbackToD = false;};


public:
	
static QLineF_SMI* SMIMake_QLineF(const QPointF& apt1, const QPointF& apt2) {
	QLineF_SMI* retVal = new QLineF_SMI(apt1, apt2);
	registerDInstance(retVal);
	return retVal;
};

private:
    QLineF_SMI(const QPointF& apt1, const QPointF& apt2): QLineF(apt1, apt2) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QLineF_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QLineF_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QLineF_SMI* QLineF_QLineF_SMIX4(const QLine& line) {
	
	QLineF_SMI* obj = QLineF_SMI::SMIMake_QLineF(line);
	return obj;
}


extern "C" bool QLineF_isNull_SMIX5(QLineF* self) {

	bool retValue = self->isNull();
	return retValue;

}

extern "C" QLineF* QLineF_unitVector_SMIX9(QLineF* self) {

	QLineF retValue = self->unitVector();
	QLineF* copiedRetValue = new QLineF(retValue);
	return copiedRetValue;

}

extern "C" bool QLineF_operatornotequals_SMIX11(QLineF* self, const QLineF& d) {

	bool retValue = self->operator!=(d);
	return retValue;

}

extern "C" QLineF_SMI* QLineF_QLineF_SMIX12() {
	
	QLineF_SMI* obj = QLineF_SMI::SMIMake_QLineF();
	return obj;
}


extern "C" QLineF_SMI* QLineF_QLineF_SMIX13(const QPointF& apt1, const QPointF& apt2) {
	
	QLineF_SMI* obj = QLineF_SMI::SMIMake_QLineF(apt1, apt2);
	return obj;
}


extern "C" QPointF* QLineF_p1_SMIX21(QLineF* self) {

	QPointF retValue = self->p1();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QLineF_p2_SMIX22(QLineF* self) {

	QPointF retValue = self->p2();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QLineF* QLineF_normalVector_SMIX25(QLineF* self) {

	QLineF retValue = self->normalVector();
	QLineF* copiedRetValue = new QLineF(retValue);
	return copiedRetValue;

}

extern "C" void QLineF_translate_SMIX26(QLineF* self, const QPointF& point) {

	self->translate(point);

}

extern "C" QLine* QLineF_toLine_SMIX30(QLineF* self) {

	QLine retValue = self->toLine();
	QLine* copiedRetValue = new QLine(retValue);
	return copiedRetValue;

}

extern "C" bool QLineF_operatorequals_SMIX31(QLineF* self, const QLineF& d) {

	bool retValue = self->operator==(d);
	return retValue;

}

extern "C" QLineF* QLineF_translated_SMIX36(QLineF* self, const QPointF& p) {

	QLineF retValue = self->translated(p);
	QLineF* copiedRetValue = new QLineF(retValue);
	return copiedRetValue;

}

extern "C" void QLineF_setP1_SMIX38(QLineF* self, const QPointF& aP1) {

	self->setP1(aP1);

}

extern "C" void QLineF_setP2_SMIX39(QLineF* self, const QPointF& aP2) {

	self->setP2(aP2);

}

extern "C" void QLineF_setPoints_SMIX40(QLineF* self, const QPointF& aP1, const QPointF& aP2) {

	self->setPoints(aP1, aP2);

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QLineF_CPPObject(QLineF* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QLineF_SMI_CPPObject(QLineF_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QLineF
