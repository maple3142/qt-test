#include <QApplication>
#include "window.h"

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	MainWindow win;
	win.setFixedSize(QSize(200, 50));
	win.show();
	return app.exec();
}
