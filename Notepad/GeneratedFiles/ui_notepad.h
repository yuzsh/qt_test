/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotepadClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *quitButton;
    QPushButton *helloButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotepadClass)
    {
        if (NotepadClass->objectName().isEmpty())
            NotepadClass->setObjectName(QStringLiteral("NotepadClass"));
        NotepadClass->resize(600, 400);
        centralWidget = new QWidget(NotepadClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 70, 258, 225));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        quitButton = new QPushButton(layoutWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));

        verticalLayout->addWidget(quitButton);


        verticalLayout_2->addLayout(verticalLayout);

        helloButton = new QPushButton(centralWidget);
        helloButton->setObjectName(QStringLiteral("helloButton"));
        helloButton->setGeometry(QRect(450, 80, 75, 23));
        NotepadClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NotepadClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        NotepadClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NotepadClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        NotepadClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NotepadClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        NotepadClass->setStatusBar(statusBar);

        retranslateUi(NotepadClass);

        QMetaObject::connectSlotsByName(NotepadClass);
    } // setupUi

    void retranslateUi(QMainWindow *NotepadClass)
    {
        NotepadClass->setWindowTitle(QApplication::translate("NotepadClass", "Notepad", 0));
        quitButton->setText(QApplication::translate("NotepadClass", "Quit", 0));
        helloButton->setText(QApplication::translate("NotepadClass", "Hello", 0));
    } // retranslateUi

};

namespace Ui {
    class NotepadClass: public Ui_NotepadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
