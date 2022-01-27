#include "colorlogger.h"
#include <QDebug>

colorLogger::colorLogger(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//app创建之后，调一下initLog就行了
	initLog();
	LOG_INFO << u8"故事就是从这里开始的";
}

void colorLogger::on_pushButton_clicked()
{
	for (int i = 0; i < 10; i++)
	{
		qDebug() << QString::fromLocal8Bit("测试测试测试:") << i;

	}

}
void colorLogger::on_pushButton1_clicked()
{
	for (int i = 0; i < 10; i++)
	{
		LOG_DEBUG << QString::fromLocal8Bit("测试测试测试:") << i;

	}

}
colorLogger::~colorLogger()
{
}
