
/*
* CPP Wrapper for QLine
*/

#include <instance_tracker.h>

#include <qline.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QLine_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QLine_SMI: QLine {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QLine_SMI* SMIMake_QLine() {
	QLine_SMI* retVal = new QLine_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QLine_SMI(): QLine() {inhibitDestructorCallbackToD = false;};


public:
	
static QLine_SMI* SMIMake_QLine(const QPoint& pt1_, const QPoint& pt2_) {
	QLine_SMI* retVal = new QLine_SMI(pt1_, pt2_);
	registerDInstance(retVal);
	return retVal;
};

private:
    QLine_SMI(const QPoint& pt1_, const QPoint& pt2_): QLine(pt1_, pt2_) {inhibitDestructorCallbackToD = false;};


public:
	
static QLine_SMI* SMIMake_QLine(int x1pos, int y1pos, int x2pos, int y2pos) {
	QLine_SMI* retVal = new QLine_SMI(x1pos, y1pos, x2pos, y2pos);
	registerDInstance(retVal);
	return retVal;
};

private:
    QLine_SMI(int x1pos, int y1pos, int x2pos, int y2pos): QLine(x1pos, y1pos, x2pos, y2pos) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QLine_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QLine_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" bool QLine_operatornotequals_SMIX3(QLine* self, const QLine& d) {

	bool retValue = self->operator!=(d);
	return retValue;

}

extern "C" QLine_SMI* QLine_QLine_SMIX4() {
	
	QLine_SMI* obj = QLine_SMI::SMIMake_QLine();
	return obj;
}


extern "C" QLine_SMI* QLine_QLine_SMIX5(const QPoint& pt1_, const QPoint& pt2_) {
	
	QLine_SMI* obj = QLine_SMI::SMIMake_QLine(pt1_, pt2_);
	return obj;
}


extern "C" QLine_SMI* QLine_QLine_SMIX6(int x1pos, int y1pos, int x2pos, int y2pos) {
	
	QLine_SMI* obj = QLine_SMI::SMIMake_QLine(x1pos, y1pos, x2pos, y2pos);
	return obj;
}


extern "C" bool QLine_isNull_SMIX9(QLine* self) {

	bool retValue = self->isNull();
	return retValue;

}

extern "C" int QLine_x1_SMIX12(QLine* self) {

	int retValue = self->x1();
	return retValue;

}

extern "C" int QLine_y1_SMIX13(QLine* self) {

	int retValue = self->y1();
	return retValue;

}

extern "C" int QLine_x2_SMIX14(QLine* self) {

	int retValue = self->x2();
	return retValue;

}

extern "C" int QLine_y2_SMIX15(QLine* self) {

	int retValue = self->y2();
	return retValue;

}

extern "C" QPoint* QLine_p1_SMIX16(QLine* self) {

	QPoint retValue = self->p1();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QLine_p2_SMIX17(QLine* self) {

	QPoint retValue = self->p2();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" int QLine_dx_SMIX18(QLine* self) {

	int retValue = self->dx();
	return retValue;

}

extern "C" int QLine_dy_SMIX19(QLine* self) {

	int retValue = self->dy();
	return retValue;

}

extern "C" void QLine_translate_SMIX20(QLine* self, const QPoint& point) {

	self->translate(point);

}

extern "C" void QLine_translate_SMIX21(QLine* self, int adx, int ady) {

	self->translate(adx, ady);

}

extern "C" bool QLine_operatorequals_SMIX22(QLine* self, const QLine& d) {

	bool retValue = self->operator==(d);
	return retValue;

}

extern "C" QLine* QLine_translated_SMIX23(QLine* self, const QPoint& p) {

	QLine retValue = self->translated(p);
	QLine* copiedRetValue = new QLine(retValue);
	return copiedRetValue;

}

extern "C" QLine* QLine_translated_SMIX24(QLine* self, int adx, int ady) {

	QLine retValue = self->translated(adx, ady);
	QLine* copiedRetValue = new QLine(retValue);
	return copiedRetValue;

}

extern "C" void QLine_setP1_SMIX25(QLine* self, const QPoint& aP1) {

	self->setP1(aP1);

}

extern "C" void QLine_setP2_SMIX26(QLine* self, const QPoint& aP2) {

	self->setP2(aP2);

}

extern "C" void QLine_setPoints_SMIX27(QLine* self, const QPoint& aP1, const QPoint& aP2) {

	self->setPoints(aP1, aP2);

}

extern "C" void QLine_setLine_SMIX28(QLine* self, int aX1, int aY1, int aX2, int aY2) {

	self->setLine(aX1, aY1, aX2, aY2);

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QLine_CPPObject(QLine* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QLine_SMI_CPPObject(QLine_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QLine
