#include "colorlogger.h"
#include <QDebug>

colorLogger::colorLogger(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//app����֮�󣬵�һ��initLog������
	initLog();
	LOG_INFO << u8"���¾��Ǵ����￪ʼ��";
}

void colorLogger::on_pushButton_clicked()
{
	for (int i = 0; i < 10; i++)
	{
		qDebug() << QString::fromLocal8Bit("���Բ��Բ���:") << i;

	}

}
void colorLogger::on_pushButton1_clicked()
{
	for (int i = 0; i < 10; i++)
	{
		LOG_DEBUG << QString::fromLocal8Bit("���Բ��Բ���:") << i;

	}

}
colorLogger::~colorLogger()
{
}
