#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_notepad.h"

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = Q_NULLPTR);
	//~Notepad();

private slots:
	void on_quitButton_clicked();
	void on_helloButton_clicked();

private:
    Ui::NotepadClass ui;
};
