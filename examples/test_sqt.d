

import std.stdio;
import std.string;
import std.conv;

import qtcore.QRect;
import qtcore.QPoint;
import qtcore.QPointF;
import qtcore.QSize;

import qtcore.QObject: SlotException;

import qtcore.Qt.ContextMenuPolicy;
import qtcore.Qt.FocusPolicy;

import qtwidget.QWidget;
import qtwidget.QLineEdit;
import qtwidget.QLabel;
import qtwidget.QHBoxLayout;
import qtwidget.QKeyEvent;
import qtwidget.QPaintEvent;
import qtwidget.QPainter;
import qtwidget.QPushButton;
import qtwidget.QApplication;

import qtcore.WrappedObject;

class MyRect:QRect {
	
	this(int a, int b, int c, int d) {
		super(a,b,c,d);
	}
	
	void printDetails() {
		int a,b,c,d;
		getRect(&a,&b,&c,&d);
		writeln("Details are ", a, " ", b, " ", c, " ", d);
	}
}


class MyWidget: QWidget {
	
	this(QWidget parent, int flags) {
		super(parent, flags);
	}
	
	override void paintEvent(QPaintEvent paintEvent) {
		auto painter = new QPainter(this);
		painter.drawLine(0, 0, 100, 100);
		painter.drawLine(100, 0, 0, 100);
		painter.drawLine(200, 0, 100, 100);
		painter.destroy();
		return super.paintEvent(paintEvent);
	}
}

class MyLineEdit: QLineEdit {
	
	this(QWidget parent) {
		super(parent);
	}
	
	override void keyPressEvent(QKeyEvent arg0) {
		writeln("key press event of key " ~ arg0.text());
		super.keyPressEvent(arg0);
	}
	
}

int  main() {
	writeln("create rect");
	auto rect1 = new QRect(4, 6, 10, 10);
	writeln("create rect");
	auto rect2 = new QRect(5, 7, 8, 9);
	writeln("create rect");
	auto rect10 = new MyRect(51, 71, 81, 91);
	
	rect10.printDetails();
	
	int a,b,c,d;
	
	writeln("rect.get rect");
	rect1.getRect(&a,&b,&c,&d);
	
	writeln("x is %s".format(rect1.x()));
	writeln("coords are %s %s %s %s".format(a,b,c,d));
	
	writeln("create point");
	auto point1 = new QPoint(21, 22);
	writeln("create point");
	auto point2 = new QPoint(31, 40);
	
	writeln("point x, y %s %s".format(point1.x(), point1.y()));
	writeln("create rect");
	auto rect3 = new QRect(point1, point2);
	
	rect3.getRect(&a,&b,&c,&d);
	
	writeln("x is %s".format(rect3.x()));
	writeln("coords are %s %s %s %s".format(a,b,c,d));
	
	QPoint pointTopLeft = rect3.topLeft();
	writeln("topLeft x, y %s %s".format(pointTopLeft.x(), pointTopLeft.y()));
	
	int argc = 0;
	auto app = new QApplication(&argc, 0);
	writeln("Is right-to-left: " ~ to!string(app.isRightToLeft()));
	writeln("Instance is: " ~ to!string(app.instance()));
	writeln("app is " ~ to!string(app));
	writeln("platform name is " ~ app.platformName());
	auto widget1 = new MyWidget(null, 0);
	widget1.setWindowTitle("Smidgen Main Window");
	writeln("widget is " ~ to!string(widget1));
	
	auto hbox = new QHBoxLayout(widget1);
	widget1.setLayout(hbox);
	
	// test enums
	widget1.setFocusPolicy(FocusPolicy.StrongFocus);
	FocusPolicy policy = widget1.focusPolicy();
	assert(policy == FocusPolicy.StrongFocus);
	
	auto le1 = new MyLineEdit(widget1);
	auto le2 = new MyLineEdit(widget1);
	auto lbl1 = new QLabel("Smidgen لقمة", widget1);
	hbox.addWidget(le1);
	hbox.addWidget(le2);
	hbox.addWidget(lbl1);
	
	auto pb1 = new QPushButton("Push Me!");
	hbox.addWidget(pb1);
	
	le1.setToolTip("My tooltip");

	le1.connect(le1, "2textChanged(const QString &)", le2, "1setText(const QString &)");
	
	le1.connect(le1, "testSignal", le2, "1setText(const QString &)");
	le1.emit!"testSignal"("testText", hbox);
	try {
		le1.emit!"testSignal"(1);
		throw new Exception("This should not have worked");
	} catch (SlotException) {
		// we're good
	}	
	
	widget1.show();
	writeln("shown");
	app.exec();
	writeln("execed");
	app.closeAllWindows();

	writeln("all windows closed");
	writeln("END");
	
	rect1.destroy();
	rect2.destroy();
	rect3.destroy();
	rect10.destroy();
	point1.destroy();
	point2.destroy();
	pointTopLeft.destroy();
	writeln("END widget1");
	widget1.destroy();
	writeln("END le1");
	le1.destroy();
	writeln("END lbl1");
	lbl1.destroy();
	writeln("END hbox");
	hbox.destroy();
	writeln("END app");
	app.exit(0);
	app.destroy();
	writeln("END2");
	
	foreach(key, value; wrappedObjectsToDWrapper) {
		writeln(key, value);
		if (value) value.destroy();
	}
	
	writeln("END3");
	
	
	return 0;
	
}