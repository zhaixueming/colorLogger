#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_colorlogger.h"
#include "Logger.h"
#include "LoggerTemplate.h"

using namespace  Logger;

class colorLogger : public QMainWindow
{
	Q_OBJECT

public:
	colorLogger(QWidget *parent = Q_NULLPTR);

	~colorLogger();
private slots:
	void on_pushButton_clicked();
	void on_pushButton1_clicked();

private:
	Ui::colorLoggerClass ui;
};
