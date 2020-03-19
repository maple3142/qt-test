#include "window.h"
#include <QCoreApplication>
#include <QDebug>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
	btn = new QPushButton("Click me", this);
	btn->setGeometry(QRect(QPoint(0, 0), QSize(200, 50)));
	connect(btn, SIGNAL(clicked()), this, SLOT(handleButton()));
}

void MainWindow::handleButton() {
	btn->setText("Clicked");
	qDebug() << "Button clicked";
}
