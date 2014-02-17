
/*
* CPP Wrapper for QRectF
*/

#include <instance_tracker.h>

#include <qrect.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QRectF_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QRectF_SMI: QRectF {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QRectF_SMI* SMIMake_QRectF(const QPointF& atopLeft, const QSizeF& asize) {
	QRectF_SMI* retVal = new QRectF_SMI(atopLeft, asize);
	registerDInstance(retVal);
	return retVal;
};

private:
    QRectF_SMI(const QPointF& atopLeft, const QSizeF& asize): QRectF(atopLeft, asize) {inhibitDestructorCallbackToD = false;};


public:
	
static QRectF_SMI* SMIMake_QRectF(const QPointF& atopLeft, const QPointF& abottomRight) {
	QRectF_SMI* retVal = new QRectF_SMI(atopLeft, abottomRight);
	registerDInstance(retVal);
	return retVal;
};

private:
    QRectF_SMI(const QPointF& atopLeft, const QPointF& abottomRight): QRectF(atopLeft, abottomRight) {inhibitDestructorCallbackToD = false;};


public:
	
static QRectF_SMI* SMIMake_QRectF(const QRect& r) {
	QRectF_SMI* retVal = new QRectF_SMI(r);
	registerDInstance(retVal);
	return retVal;
};

private:
    QRectF_SMI(const QRect& r): QRectF(r) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QRectF_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QRectF_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QRectF_SMI* QRectF_QRectF_SMIX4(const QPointF& atopLeft, const QSizeF& asize) {
	
	QRectF_SMI* obj = QRectF_SMI::SMIMake_QRectF(atopLeft, asize);
	return obj;
}


extern "C" QRectF_SMI* QRectF_QRectF_SMIX5(const QPointF& atopLeft, const QPointF& abottomRight) {
	
	QRectF_SMI* obj = QRectF_SMI::SMIMake_QRectF(atopLeft, abottomRight);
	return obj;
}


extern "C" QRectF_SMI* QRectF_QRectF_SMIX7(const QRect& r) {
	
	QRectF_SMI* obj = QRectF_SMI::SMIMake_QRectF(r);
	return obj;
}


extern "C" QRectF* QRectF_normalized_SMIX10(QRectF* self) {

	QRectF retValue = self->normalized();
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QRectF_topLeft_SMIX17(QRectF* self) {

	QPointF retValue = self->topLeft();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QRectF_bottomRight_SMIX18(QRectF* self) {

	QPointF retValue = self->bottomRight();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QRectF_topRight_SMIX19(QRectF* self) {

	QPointF retValue = self->topRight();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QPointF* QRectF_bottomLeft_SMIX20(QRectF* self) {

	QPointF retValue = self->bottomLeft();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" QRectF* QRectF_operatorpipe_SMIX21(QRectF* self, const QRectF& r) {

	QRectF retValue = self->operator|(r);
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" QRectF* QRectF_operatorand_SMIX22(QRectF* self, const QRectF& r) {

	QRectF retValue = self->operator&(r);
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" bool QRectF_contains_SMIX23(QRectF* self, const QPointF& p) {

	bool retValue = self->contains(p);
	return retValue;

}

extern "C" bool QRectF_contains_SMIX26(QRectF* self, const QRectF& r) {

	bool retValue = self->contains(r);
	return retValue;

}

extern "C" bool QRectF_intersects_SMIX29(QRectF* self, const QRectF& r) {

	bool retValue = self->intersects(r);
	return retValue;

}

extern "C" bool QRectF_isNull_SMIX30(QRectF* self) {

	bool retValue = self->isNull();
	return retValue;

}

extern "C" bool QRectF_isEmpty_SMIX31(QRectF* self) {

	bool retValue = self->isEmpty();
	return retValue;

}

extern "C" bool QRectF_isValid_SMIX32(QRectF* self) {

	bool retValue = self->isValid();
	return retValue;

}

extern "C" void QRectF_setTopLeft_SMIX41(QRectF* self, const QPointF& p) {

	self->setTopLeft(p);

}

extern "C" void QRectF_setTopRight_SMIX42(QRectF* self, const QPointF& p) {

	self->setTopRight(p);

}

extern "C" void QRectF_setBottomLeft_SMIX43(QRectF* self, const QPointF& p) {

	self->setBottomLeft(p);

}

extern "C" void QRectF_setBottomRight_SMIX44(QRectF* self, const QPointF& p) {

	self->setBottomRight(p);

}

extern "C" QPointF* QRectF_center_SMIX45(QRectF* self) {

	QPointF retValue = self->center();
	QPointF* copiedRetValue = new QPointF(retValue);
	return copiedRetValue;

}

extern "C" void QRectF_moveTopLeft_SMIX50(QRectF* self, const QPointF& p) {

	self->moveTopLeft(p);

}

extern "C" void QRectF_moveTopRight_SMIX51(QRectF* self, const QPointF& p) {

	self->moveTopRight(p);

}

extern "C" void QRectF_moveBottomLeft_SMIX52(QRectF* self, const QPointF& p) {

	self->moveBottomLeft(p);

}

extern "C" void QRectF_moveBottomRight_SMIX53(QRectF* self, const QPointF& p) {

	self->moveBottomRight(p);

}

extern "C" void QRectF_moveCenter_SMIX54(QRectF* self, const QPointF& p) {

	self->moveCenter(p);

}

extern "C" QSizeF* QRectF_size_SMIX57(QRectF* self) {

	QSizeF retValue = self->size();
	QSizeF* copiedRetValue = new QSizeF(retValue);
	return copiedRetValue;

}

extern "C" void QRectF_translate_SMIX59(QRectF* self, const QPointF& p) {

	self->translate(p);

}

extern "C" void QRectF_moveTo_SMIX61(QRectF* self, const QPointF& p) {

	self->moveTo(p);

}

extern "C" QRectF* QRectF_translated_SMIX63(QRectF* self, const QPointF& p) {

	QRectF retValue = self->translated(p);
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" void QRectF_setSize_SMIX72(QRectF* self, const QSizeF& s) {

	self->setSize(s);

}

extern "C" QRectF& QRectF_operatorpipeequals_SMIX74(QRectF* self, const QRectF& r) {

	QRectF& retValue = self->operator|=(r);
	return retValue;

}

extern "C" QRectF& QRectF_operatorandequals_SMIX75(QRectF* self, const QRectF& r) {

	QRectF& retValue = self->operator&=(r);
	return retValue;

}

extern "C" QRectF* QRectF_intersected_SMIX76(QRectF* self, const QRectF& r) {

	QRectF retValue = self->intersected(r);
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" QRectF* QRectF_united_SMIX77(QRectF* self, const QRectF& r) {

	QRectF retValue = self->united(r);
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" QRect* QRectF_toAlignedRect_SMIX78(QRectF* self) {

	QRect retValue = self->toAlignedRect();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" QRect* QRectF_toRect_SMIX79(QRectF* self) {

	QRect retValue = self->toRect();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QRectF_CPPObject(QRectF* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QRectF_SMI_CPPObject(QRectF_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QRectF
