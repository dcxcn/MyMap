#include "mymap.h"
#include <QtWidgets/QApplication>

#include <ctime>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

    srand(time(nullptr));

	MyMap w(nullptr);
	w.setGeometry(100, 100, 1200, 700);
	w.show();
	return a.exec();
}
