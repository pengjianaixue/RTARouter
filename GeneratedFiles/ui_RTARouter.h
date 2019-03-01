/********************************************************************************
** Form generated from reading UI file 'RTARouter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTAROUTER_H
#define UI_RTAROUTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RTARouterClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RTARouterClass)
    {
        if (RTARouterClass->objectName().isEmpty())
            RTARouterClass->setObjectName(QStringLiteral("RTARouterClass"));
        RTARouterClass->resize(600, 400);
        menuBar = new QMenuBar(RTARouterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        RTARouterClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RTARouterClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RTARouterClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(RTARouterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RTARouterClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(RTARouterClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RTARouterClass->setStatusBar(statusBar);

        retranslateUi(RTARouterClass);

        QMetaObject::connectSlotsByName(RTARouterClass);
    } // setupUi

    void retranslateUi(QMainWindow *RTARouterClass)
    {
        RTARouterClass->setWindowTitle(QApplication::translate("RTARouterClass", "RTARouter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RTARouterClass: public Ui_RTARouterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTAROUTER_H
