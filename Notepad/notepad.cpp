#include "notepad.h"

Notepad::Notepad(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

//Notepad::~Notepad()
//{
//	delete ui;
//}

void Notepad::on_quitButton_clicked()
{
	qApp->quit();
}

void Notepad::on_helloButton_clicked()
{
	ui.textEdit->setText("Hello!");
}