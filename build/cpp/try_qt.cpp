
#include <iostream>
using namespace std;

#include <QObject>
#include <QWidget>
#include <QMetaObject>
#include <QApplication>

extern "C" const char* getClassNameC(void* wrappedObject) {
	QObject* obj = (QObject*) wrappedObject;
	return obj->metaObject()->className();
}

int main(int argc, char *argv[]) {
	QApplication* app = new QApplication(argc, argv);
	cout << "A" << endl;
	QWidget* r1 = new QWidget();
	cout << "B" << endl;
	cout << "isWidgetType " << r1->isWidgetType() << endl;
	QObject* obj = (QObject*) r1;
	cout << "C" << endl;
	const char* name = obj->metaObject()->className();
	cout << "D" << endl;
	cout << name << endl;
	r1->show();
	app->exec();
	return 0;

}
