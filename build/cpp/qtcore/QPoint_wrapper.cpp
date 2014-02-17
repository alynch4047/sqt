
/*
* CPP Wrapper for QPoint
*/

#include <instance_tracker.h>

#include <qpoint.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QPoint_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QPoint_SMI: QPoint {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QPoint_SMI* SMIMake_QPoint() {
	QPoint_SMI* retVal = new QPoint_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QPoint_SMI(): QPoint() {inhibitDestructorCallbackToD = false;};


public:
	
static QPoint_SMI* SMIMake_QPoint(int xpos, int ypos) {
	QPoint_SMI* retVal = new QPoint_SMI(xpos, ypos);
	registerDInstance(retVal);
	return retVal;
};

private:
    QPoint_SMI(int xpos, int ypos): QPoint(xpos, ypos) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QPoint_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QPoint_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" int QPoint_manhattanLength_SMIX3(QPoint* self) {

	int retValue = self->manhattanLength();
	return retValue;

}

extern "C" QPoint_SMI* QPoint_QPoint_SMIX4() {
	
	QPoint_SMI* obj = QPoint_SMI::SMIMake_QPoint();
	return obj;
}


extern "C" QPoint_SMI* QPoint_QPoint_SMIX5(int xpos, int ypos) {
	
	QPoint_SMI* obj = QPoint_SMI::SMIMake_QPoint(xpos, ypos);
	return obj;
}


extern "C" bool QPoint_isNull_SMIX8(QPoint* self) {

	bool retValue = self->isNull();
	return retValue;

}

extern "C" int QPoint_x_SMIX11(QPoint* self) {

	int retValue = self->x();
	return retValue;

}

extern "C" int QPoint_y_SMIX12(QPoint* self) {

	int retValue = self->y();
	return retValue;

}

extern "C" void QPoint_setX_SMIX13(QPoint* self, int xpos) {

	self->setX(xpos);

}

extern "C" void QPoint_setY_SMIX14(QPoint* self, int ypos) {

	self->setY(ypos);

}

extern "C" QPoint& QPoint_operatorplusequals_SMIX15(QPoint* self, const QPoint& p) {

	QPoint& retValue = self->operator+=(p);
	return retValue;

}

extern "C" QPoint& QPoint_operatorminusequals_SMIX16(QPoint* self, const QPoint& p) {

	QPoint& retValue = self->operator-=(p);
	return retValue;

}

extern "C" QPoint& QPoint_operatortimesequals_SMIX17(QPoint* self, int c) {

	QPoint& retValue = self->operator*=(c);
	return retValue;

}

extern "C" QPoint& QPoint_operatortimesequals_SMIX18(QPoint* self, double c) {

	QPoint& retValue = self->operator*=(c);
	return retValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QPoint_CPPObject(QPoint* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QPoint_SMI_CPPObject(QPoint_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QPoint
