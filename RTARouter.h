#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RTARouter.h"

class RTARouter : public QMainWindow
{
	Q_OBJECT

public:
	RTARouter(QWidget *parent = Q_NULLPTR);

private:
	Ui::RTARouterClass ui;
};
