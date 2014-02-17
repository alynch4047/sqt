
/*
* CPP Wrapper for QRect
*/

#include <instance_tracker.h>

#include <qrect.h>



// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QRect_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QRect_SMI: QRect {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QRect_SMI* SMIMake_QRect(int aleft, int atop, int awidth, int aheight) {
	QRect_SMI* retVal = new QRect_SMI(aleft, atop, awidth, aheight);
	registerDInstance(retVal);
	return retVal;
};

private:
    QRect_SMI(int aleft, int atop, int awidth, int aheight): QRect(aleft, atop, awidth, aheight) {inhibitDestructorCallbackToD = false;};


public:
	
static QRect_SMI* SMIMake_QRect(const QPoint& atopLeft, const QPoint& abottomRight) {
	QRect_SMI* retVal = new QRect_SMI(atopLeft, abottomRight);
	registerDInstance(retVal);
	return retVal;
};

private:
    QRect_SMI(const QPoint& atopLeft, const QPoint& abottomRight): QRect(atopLeft, abottomRight) {inhibitDestructorCallbackToD = false;};


public:
	
static QRect_SMI* SMIMake_QRect(const QPoint& atopLeft, const QSize& asize) {
	QRect_SMI* retVal = new QRect_SMI(atopLeft, asize);
	registerDInstance(retVal);
	return retVal;
};

private:
    QRect_SMI(const QPoint& atopLeft, const QSize& asize): QRect(atopLeft, asize) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QRect_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QRect_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QRect* QRect_normalized_SMIX4(QRect* self) {

	QRect retValue = self->normalized();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" void QRect_moveCenter_SMIX5(QRect* self, const QPoint& p) {

	self->moveCenter(p);

}

extern "C" QRect* QRect_operatorpipe_SMIX6(QRect* self, const QRect& r) {

	QRect retValue = self->operator|(r);
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" bool QRect_contains_SMIX8(QRect* self, const QPoint& point, bool proper) {

	bool retValue = self->contains(point, proper);
	return retValue;

}

extern "C" bool QRect_contains_SMIX11(QRect* self, const QRect& rectangle, bool proper) {

	bool retValue = self->contains(rectangle, proper);
	return retValue;

}

extern "C" bool QRect_intersects_SMIX14(QRect* self, const QRect& r) {

	bool retValue = self->intersects(r);
	return retValue;

}

extern "C" QRect_SMI* QRect_QRect_SMIX15(int aleft, int atop, int awidth, int aheight) {
	
	QRect_SMI* obj = QRect_SMI::SMIMake_QRect(aleft, atop, awidth, aheight);
	return obj;
}


extern "C" QRect_SMI* QRect_QRect_SMIX16(const QPoint& atopLeft, const QPoint& abottomRight) {
	
	QRect_SMI* obj = QRect_SMI::SMIMake_QRect(atopLeft, abottomRight);
	return obj;
}


extern "C" QRect_SMI* QRect_QRect_SMIX17(const QPoint& atopLeft, const QSize& asize) {
	
	QRect_SMI* obj = QRect_SMI::SMIMake_QRect(atopLeft, asize);
	return obj;
}


extern "C" bool QRect_isNull_SMIX20(QRect* self) {

	bool retValue = self->isNull();
	return retValue;

}

extern "C" bool QRect_isEmpty_SMIX21(QRect* self) {

	bool retValue = self->isEmpty();
	return retValue;

}

extern "C" bool QRect_isValid_SMIX22(QRect* self) {

	bool retValue = self->isValid();
	return retValue;

}

extern "C" int QRect_left_SMIX25(QRect* self) {

	int retValue = self->left();
	return retValue;

}

extern "C" int QRect_top_SMIX26(QRect* self) {

	int retValue = self->top();
	return retValue;

}

extern "C" int QRect_right_SMIX27(QRect* self) {

	int retValue = self->right();
	return retValue;

}

extern "C" int QRect_bottom_SMIX28(QRect* self) {

	int retValue = self->bottom();
	return retValue;

}

extern "C" int QRect_x_SMIX29(QRect* self) {

	int retValue = self->x();
	return retValue;

}

extern "C" int QRect_y_SMIX30(QRect* self) {

	int retValue = self->y();
	return retValue;

}

extern "C" void QRect_setLeft_SMIX31(QRect* self, int pos) {

	self->setLeft(pos);

}

extern "C" void QRect_setTop_SMIX32(QRect* self, int pos) {

	self->setTop(pos);

}

extern "C" void QRect_setRight_SMIX33(QRect* self, int pos) {

	self->setRight(pos);

}

extern "C" void QRect_setBottom_SMIX34(QRect* self, int pos) {

	self->setBottom(pos);

}

extern "C" void QRect_setTopLeft_SMIX35(QRect* self, const QPoint& p) {

	self->setTopLeft(p);

}

extern "C" void QRect_setBottomRight_SMIX36(QRect* self, const QPoint& p) {

	self->setBottomRight(p);

}

extern "C" void QRect_setTopRight_SMIX37(QRect* self, const QPoint& p) {

	self->setTopRight(p);

}

extern "C" void QRect_setBottomLeft_SMIX38(QRect* self, const QPoint& p) {

	self->setBottomLeft(p);

}

extern "C" void QRect_setX_SMIX39(QRect* self, int ax) {

	self->setX(ax);

}

extern "C" void QRect_setY_SMIX40(QRect* self, int ay) {

	self->setY(ay);

}

extern "C" QPoint* QRect_topLeft_SMIX41(QRect* self) {

	QPoint retValue = self->topLeft();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QRect_bottomRight_SMIX42(QRect* self) {

	QPoint retValue = self->bottomRight();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QRect_topRight_SMIX43(QRect* self) {

	QPoint retValue = self->topRight();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QRect_bottomLeft_SMIX44(QRect* self) {

	QPoint retValue = self->bottomLeft();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" QPoint* QRect_center_SMIX45(QRect* self) {

	QPoint retValue = self->center();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" int QRect_width_SMIX46(QRect* self) {

	int retValue = self->width();
	return retValue;

}

extern "C" int QRect_height_SMIX47(QRect* self) {

	int retValue = self->height();
	return retValue;

}

extern "C" QSize* QRect_size_SMIX48(QRect* self) {

	QSize retValue = self->size();
	QSize* copiedRetValue = new QSize(retValue);
	return copiedRetValue;

}

extern "C" void QRect_translate_SMIX49(QRect* self, int dx, int dy) {

	self->translate(dx, dy);

}

extern "C" void QRect_translate_SMIX50(QRect* self, const QPoint& p) {

	self->translate(p);

}

extern "C" QRect* QRect_translated_SMIX51(QRect* self, int dx, int dy) {

	QRect retValue = self->translated(dx, dy);
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" QRect* QRect_translated_SMIX52(QRect* self, const QPoint& p) {

	QRect retValue = self->translated(p);
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" void QRect_moveTo_SMIX53(QRect* self, int ax, int ay) {

	self->moveTo(ax, ay);

}

extern "C" void QRect_moveTo_SMIX54(QRect* self, const QPoint& p) {

	self->moveTo(p);

}

extern "C" void QRect_moveLeft_SMIX55(QRect* self, int pos) {

	self->moveLeft(pos);

}

extern "C" void QRect_moveTop_SMIX56(QRect* self, int pos) {

	self->moveTop(pos);

}

extern "C" void QRect_moveRight_SMIX57(QRect* self, int pos) {

	self->moveRight(pos);

}

extern "C" void QRect_moveBottom_SMIX58(QRect* self, int pos) {

	self->moveBottom(pos);

}

extern "C" void QRect_moveTopLeft_SMIX59(QRect* self, const QPoint& p) {

	self->moveTopLeft(p);

}

extern "C" void QRect_moveBottomRight_SMIX60(QRect* self, const QPoint& p) {

	self->moveBottomRight(p);

}

extern "C" void QRect_moveTopRight_SMIX61(QRect* self, const QPoint& p) {

	self->moveTopRight(p);

}

extern "C" void QRect_moveBottomLeft_SMIX62(QRect* self, const QPoint& p) {

	self->moveBottomLeft(p);

}

extern "C" void QRect_getRect_SMIX63(QRect* self, int* ax, int* ay, int* aw, int* ah) {

	self->getRect(ax, ay, aw, ah);

}

extern "C" void QRect_setRect_SMIX64(QRect* self, int ax, int ay, int aw, int ah) {

	self->setRect(ax, ay, aw, ah);

}

extern "C" void QRect_getCoords_SMIX65(QRect* self, int* xp1, int* yp1, int* xp2, int* yp2) {

	self->getCoords(xp1, yp1, xp2, yp2);

}

extern "C" void QRect_setCoords_SMIX66(QRect* self, int xp1, int yp1, int xp2, int yp2) {

	self->setCoords(xp1, yp1, xp2, yp2);

}

extern "C" QRect* QRect_adjusted_SMIX67(QRect* self, int xp1, int yp1, int xp2, int yp2) {

	QRect retValue = self->adjusted(xp1, yp1, xp2, yp2);
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" void QRect_adjust_SMIX68(QRect* self, int dx1, int dy1, int dx2, int dy2) {

	self->adjust(dx1, dy1, dx2, dy2);

}

extern "C" void QRect_setWidth_SMIX69(QRect* self, int w) {

	self->setWidth(w);

}

extern "C" void QRect_setHeight_SMIX70(QRect* self, int h) {

	self->setHeight(h);

}

extern "C" void QRect_setSize_SMIX71(QRect* self, const QSize& s) {

	self->setSize(s);

}

extern "C" bool QRect_contains_SMIX72(QRect* self, int ax, int ay, bool aproper) {

	bool retValue = self->contains(ax, ay, aproper);
	return retValue;

}

extern "C" bool QRect_contains_SMIX73(QRect* self, int ax, int ay) {

	bool retValue = self->contains(ax, ay);
	return retValue;

}

extern "C" QRect& QRect_operatorpipeequals_SMIX74(QRect* self, const QRect& r) {

	QRect& retValue = self->operator|=(r);
	return retValue;

}

extern "C" QRect* QRect_intersected_SMIX76(QRect* self, const QRect& other) {

	QRect retValue = self->intersected(other);
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" QRect* QRect_united_SMIX77(QRect* self, const QRect& r) {

	QRect retValue = self->united(r);
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QRect_CPPObject(QRect* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QRect_SMI_CPPObject(QRect_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QRect
