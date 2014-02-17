
/*
* CPP Wrapper for QPainter
*/

#include <instance_tracker.h>

#include <qpainter.h>

// Headers for converters
#include <QString>


// Externs for converters
extern char* convertQStringToPChar(QString toConvert);
extern QString convertPCharToQString(char* toConvert);
// End of header section for converters


// These externs declare the functions in the D wrapper, used for virtual method calls
extern "C" void SMID_QPainter_destructor(void* wrappedObject);


// This class is used to wrap virtual and protected methods. All instances created
// from D will be instantiated using this class.
class QPainter_SMI: QPainter {

public:
	bool inhibitDestructorCallbackToD;

// Constructors


public:
	
static QPainter_SMI* SMIMake_QPainter() {
	QPainter_SMI* retVal = new QPainter_SMI();
	registerDInstance(retVal);
	return retVal;
};

private:
    QPainter_SMI(): QPainter() {inhibitDestructorCallbackToD = false;};


public:
	
static QPainter_SMI* SMIMake_QPainter(QPaintDevice* arg0) {
	QPainter_SMI* retVal = new QPainter_SMI(arg0);
	registerDInstance(retVal);
	return retVal;
};

private:
    QPainter_SMI(QPaintDevice* arg0): QPainter(arg0) {inhibitDestructorCallbackToD = false;};



// Protected and virtual method calls
public:


// Destructor
~QPainter_SMI() {
	if (! inhibitDestructorCallbackToD) {
		deregisterDInstance(this);
		SMID_QPainter_destructor(this);
	}	
}

};

//END VIRTUAL / PROTECTED CLASS 


extern "C" QPainter_SMI* QPainter_QPainter_SMIX5() {
	
	QPainter_SMI* obj = QPainter_SMI::SMIMake_QPainter();
	return obj;
}


extern "C" QPainter_SMI* QPainter_QPainter_SMIX6(QPaintDevice* arg0) {
	
	QPainter_SMI* obj = QPainter_SMI::SMIMake_QPainter(arg0);
	return obj;
}


extern "C" QPaintDevice* QPainter_device_SMIX12(QPainter* self) {

	QPaintDevice* retValue = self->device();
	return retValue;

}

extern "C" bool QPainter_begin_SMIX13(QPainter* self, QPaintDevice* arg0) {

	bool retValue = self->begin(arg0);
	return retValue;

}

extern "C" bool QPainter_end_SMIX14(QPainter* self) {

	bool retValue = self->end();
	return retValue;

}

extern "C" bool QPainter_isActive_SMIX15(QPainter* self) {

	bool retValue = self->isActive();
	return retValue;

}

extern "C" void QPainter_setPen_SMIX25(QPainter* self, int style___SMI) {
	Qt::PenStyle style = (Qt::PenStyle) style___SMI;

	self->setPen(style);

}

extern "C" void QPainter_setBrush_SMIX28(QPainter* self, int style___SMI) {
	Qt::BrushStyle style = (Qt::BrushStyle) style___SMI;

	self->setBrush(style);

}

extern "C" void QPainter_setBackgroundMode_SMIX30(QPainter* self, int mode___SMI) {
	Qt::BGMode mode = (Qt::BGMode) mode___SMI;

	self->setBackgroundMode(mode);

}

extern "C" int QPainter_backgroundMode_SMIX31(QPainter* self)  {

	Qt::BGMode retValue = self->backgroundMode();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" QPoint* QPainter_brushOrigin_SMIX32(QPainter* self) {

	QPoint retValue = self->brushOrigin();
	QPoint* copiedRetValue = new QPoint(retValue);
	return copiedRetValue;

}

extern "C" void QPainter_setBrushOrigin_SMIX33(QPainter* self, const QPointF& arg0) {

	self->setBrushOrigin(arg0);

}

extern "C" void QPainter_setClipRect_SMIX38(QPainter* self, const QRectF& rectangle, int operation___SMI) {
	Qt::ClipOperation operation = (Qt::ClipOperation) operation___SMI;

	self->setClipRect(rectangle, operation);

}

extern "C" void QPainter_setClipping_SMIX41(QPainter* self, bool enable) {

	self->setClipping(enable);

}

extern "C" bool QPainter_hasClipping_SMIX42(QPainter* self) {

	bool retValue = self->hasClipping();
	return retValue;

}

extern "C" void QPainter_save_SMIX43(QPainter* self) {

	self->save();

}

extern "C" void QPainter_restore_SMIX44(QPainter* self) {

	self->restore();

}

extern "C" void QPainter_translate_SMIX48(QPainter* self, const QPointF& offset) {

	self->translate(offset);

}

extern "C" QRect* QPainter_window_SMIX49(QPainter* self) {

	QRect retValue = self->window();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" void QPainter_setWindow_SMIX50(QPainter* self, const QRect& window) {

	self->setWindow(window);

}

extern "C" QRect* QPainter_viewport_SMIX51(QPainter* self) {

	QRect retValue = self->viewport();
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" void QPainter_setViewport_SMIX52(QPainter* self, const QRect& viewport) {

	self->setViewport(viewport);

}

extern "C" void QPainter_setViewTransformEnabled_SMIX53(QPainter* self, bool enable) {

	self->setViewTransformEnabled(enable);

}

extern "C" bool QPainter_viewTransformEnabled_SMIX54(QPainter* self) {

	bool retValue = self->viewTransformEnabled();
	return retValue;

}

extern "C" void QPainter_drawEllipse_SMIX82(QPainter* self, const QRectF& r) {

	self->drawEllipse(r);

}

extern "C" void QPainter_drawEllipse_SMIX83(QPainter* self, const QRect& r) {

	self->drawEllipse(r);

}

extern "C" void QPainter_drawArc_SMIX102(QPainter* self, const QRectF& rect, int a, int alen) {

	self->drawArc(rect, a, alen);

}

extern "C" void QPainter_drawPie_SMIX103(QPainter* self, const QRectF& rect, int a, int alen) {

	self->drawPie(rect, a, alen);

}

extern "C" void QPainter_drawChord_SMIX104(QPainter* self, const QRectF& rect, int a, int alen) {

	self->drawChord(rect, a, alen);

}

extern "C" void QPainter_setLayoutDirection_SMIX108(QPainter* self, int direction___SMI) {
	Qt::LayoutDirection direction = (Qt::LayoutDirection) direction___SMI;

	self->setLayoutDirection(direction);

}

extern "C" int QPainter_layoutDirection_SMIX109(QPainter* self)  {

	Qt::LayoutDirection retValue = self->layoutDirection();
	int convertedRetValue = (int) retValue;
	return convertedRetValue;

}

extern "C" void QPainter_drawText_SMIX110(QPainter* self, const QPointF& p, char* s___SMI) {
	QString s = convertPCharToQString(s___SMI);

	self->drawText(p, s);

}

extern "C" void QPainter_drawText_SMIX111(QPainter* self, const QRectF& rectangle, int flags, char* text___SMI, QRectF* boundingRect) {
	QString text = convertPCharToQString(text___SMI);

	self->drawText(rectangle, flags, text, boundingRect);

}

extern "C" void QPainter_drawText_SMIX112(QPainter* self, const QRect& rectangle, int flags, char* text___SMI, QRect* boundingRect) {
	QString text = convertPCharToQString(text___SMI);

	self->drawText(rectangle, flags, text, boundingRect);

}

extern "C" QRectF* QPainter_boundingRect_SMIX114(QPainter* self, const QRectF& rect, int flags, char* text___SMI) {
	QString text = convertPCharToQString(text___SMI);

	QRectF retValue = self->boundingRect(rect, flags, text);
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}

extern "C" QRect* QPainter_boundingRect_SMIX115(QPainter* self, const QRect& rect, int flags, char* text___SMI) {
	QString text = convertPCharToQString(text___SMI);

	QRect retValue = self->boundingRect(rect, flags, text);
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" void QPainter_eraseRect_SMIX119(QPainter* self, const QRectF& arg0) {

	self->eraseRect(arg0);

}

extern "C" void QPainter_drawLine_SMIX124(QPainter* self, const QLineF& l) {

	self->drawLine(l);

}

extern "C" void QPainter_drawLine_SMIX125(QPainter* self, const QLine& line) {

	self->drawLine(line);

}

extern "C" void QPainter_drawLine_SMIX126(QPainter* self, int x1, int y1, int x2, int y2) {

	self->drawLine(x1, y1, x2, y2);

}

extern "C" void QPainter_drawLine_SMIX127(QPainter* self, const QPoint& p1, const QPoint& p2) {

	self->drawLine(p1, p2);

}

extern "C" void QPainter_drawLine_SMIX128(QPainter* self, const QPointF& p1, const QPointF& p2) {

	self->drawLine(p1, p2);

}

extern "C" void QPainter_drawRect_SMIX129(QPainter* self, const QRectF& rect) {

	self->drawRect(rect);

}

extern "C" void QPainter_drawRect_SMIX130(QPainter* self, int x, int y, int w, int h) {

	self->drawRect(x, y, w, h);

}

extern "C" void QPainter_drawRect_SMIX131(QPainter* self, const QRect& r) {

	self->drawRect(r);

}

extern "C" void QPainter_drawPoint_SMIX132(QPainter* self, const QPointF& p) {

	self->drawPoint(p);

}

extern "C" void QPainter_drawPoint_SMIX133(QPainter* self, int x, int y) {

	self->drawPoint(x, y);

}

extern "C" void QPainter_drawPoint_SMIX134(QPainter* self, const QPoint& p) {

	self->drawPoint(p);

}

extern "C" void QPainter_drawEllipse_SMIX135(QPainter* self, int x, int y, int w, int h) {

	self->drawEllipse(x, y, w, h);

}

extern "C" void QPainter_drawArc_SMIX136(QPainter* self, const QRect& r, int a, int alen) {

	self->drawArc(r, a, alen);

}

extern "C" void QPainter_drawArc_SMIX137(QPainter* self, int x, int y, int w, int h, int a, int alen) {

	self->drawArc(x, y, w, h, a, alen);

}

extern "C" void QPainter_drawPie_SMIX138(QPainter* self, const QRect& rect, int a, int alen) {

	self->drawPie(rect, a, alen);

}

extern "C" void QPainter_drawPie_SMIX139(QPainter* self, int x, int y, int w, int h, int a, int alen) {

	self->drawPie(x, y, w, h, a, alen);

}

extern "C" void QPainter_drawChord_SMIX140(QPainter* self, const QRect& rect, int a, int alen) {

	self->drawChord(rect, a, alen);

}

extern "C" void QPainter_drawChord_SMIX141(QPainter* self, int x, int y, int w, int h, int a, int alen) {

	self->drawChord(x, y, w, h, a, alen);

}

extern "C" void QPainter_setClipRect_SMIX142(QPainter* self, int x, int y, int width, int height, int operation___SMI) {
	Qt::ClipOperation operation = (Qt::ClipOperation) operation___SMI;

	self->setClipRect(x, y, width, height, operation);

}

extern "C" void QPainter_setClipRect_SMIX143(QPainter* self, const QRect& rectangle, int operation___SMI) {
	Qt::ClipOperation operation = (Qt::ClipOperation) operation___SMI;

	self->setClipRect(rectangle, operation);

}

extern "C" void QPainter_eraseRect_SMIX144(QPainter* self, const QRect& rect) {

	self->eraseRect(rect);

}

extern "C" void QPainter_eraseRect_SMIX145(QPainter* self, int x, int y, int w, int h) {

	self->eraseRect(x, y, w, h);

}

extern "C" void QPainter_setBrushOrigin_SMIX147(QPainter* self, int x, int y) {

	self->setBrushOrigin(x, y);

}

extern "C" void QPainter_setBrushOrigin_SMIX148(QPainter* self, const QPoint& p) {

	self->setBrushOrigin(p);

}

extern "C" void QPainter_drawText_SMIX170(QPainter* self, const QPoint& p, char* s___SMI) {
	QString s = convertPCharToQString(s___SMI);

	self->drawText(p, s);

}

extern "C" void QPainter_drawText_SMIX171(QPainter* self, int x, int y, int width, int height, int flags, char* text___SMI, QRect* boundingRect) {
	QString text = convertPCharToQString(text___SMI);

	self->drawText(x, y, width, height, flags, text, boundingRect);

}

extern "C" void QPainter_drawText_SMIX172(QPainter* self, int x, int y, char* s___SMI) {
	QString s = convertPCharToQString(s___SMI);

	self->drawText(x, y, s);

}

extern "C" QRect* QPainter_boundingRect_SMIX173(QPainter* self, int x, int y, int w, int h, int flags, char* text___SMI) {
	QString text = convertPCharToQString(text___SMI);

	QRect retValue = self->boundingRect(x, y, w, h, flags, text);
	QRect* copiedRetValue = new QRect(retValue);
	return copiedRetValue;

}

extern "C" void QPainter_translate_SMIX177(QPainter* self, const QPoint& offset) {

	self->translate(offset);

}

extern "C" void QPainter_setViewport_SMIX178(QPainter* self, int x, int y, int w, int h) {

	self->setViewport(x, y, w, h);

}

extern "C" void QPainter_setWindow_SMIX179(QPainter* self, int x, int y, int w, int h) {

	self->setWindow(x, y, w, h);

}

extern "C" bool QPainter_worldMatrixEnabled_SMIX180(QPainter* self) {

	bool retValue = self->worldMatrixEnabled();
	return retValue;

}

extern "C" void QPainter_setWorldMatrixEnabled_SMIX181(QPainter* self, bool enabled) {

	self->setWorldMatrixEnabled(enabled);

}

extern "C" void QPainter_resetTransform_SMIX187(QPainter* self) {

	self->resetTransform();

}

extern "C" void QPainter_drawEllipse_SMIX196(QPainter* self, const QPoint& center, int rx, int ry) {

	self->drawEllipse(center, rx, ry);

}

extern "C" void QPainter_fillRect_SMIX200(QPainter* self, int x, int y, int w, int h, int c___SMI) {
	Qt::GlobalColor c = (Qt::GlobalColor) c___SMI;

	self->fillRect(x, y, w, h, c);

}

extern "C" void QPainter_fillRect_SMIX201(QPainter* self, const QRect& r, int c___SMI) {
	Qt::GlobalColor c = (Qt::GlobalColor) c___SMI;

	self->fillRect(r, c);

}

extern "C" void QPainter_fillRect_SMIX202(QPainter* self, const QRectF& r, int c___SMI) {
	Qt::GlobalColor c = (Qt::GlobalColor) c___SMI;

	self->fillRect(r, c);

}

extern "C" void QPainter_fillRect_SMIX203(QPainter* self, int x, int y, int w, int h, int style___SMI) {
	Qt::BrushStyle style = (Qt::BrushStyle) style___SMI;

	self->fillRect(x, y, w, h, style);

}

extern "C" void QPainter_fillRect_SMIX204(QPainter* self, const QRect& r, int style___SMI) {
	Qt::BrushStyle style = (Qt::BrushStyle) style___SMI;

	self->fillRect(r, style);

}

extern "C" void QPainter_fillRect_SMIX205(QPainter* self, const QRectF& r, int style___SMI) {
	Qt::BrushStyle style = (Qt::BrushStyle) style___SMI;

	self->fillRect(r, style);

}

extern "C" void QPainter_beginNativePainting_SMIX206(QPainter* self) {

	self->beginNativePainting();

}

extern "C" void QPainter_endNativePainting_SMIX207(QPainter* self) {

	self->endNativePainting();

}

extern "C" QRectF* QPainter_clipBoundingRect_SMIX216(QPainter* self) {

	QRectF retValue = self->clipBoundingRect();
	QRectF* copiedRetValue = new QRectF(retValue);
	return copiedRetValue;

}


/*
* Function to delete CPP objects, called from D destructor
*/
extern "C" void SMI_delete_QPainter_CPPObject(QPainter* obj) {
	delete obj;
}

/*
* Function to delete CPP Wrapper objects, called from D destructor
*/
extern "C" void SMI_delete_QPainter_SMI_CPPObject(QPainter_SMI* obj) {
	deregisterDInstance(obj);
	obj->inhibitDestructorCallbackToD = true;
	delete obj;
}

// End CPP Wrapper for QPainter
