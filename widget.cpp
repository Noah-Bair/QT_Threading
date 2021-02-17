#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    qDebug() << "Main" << QThread::currentThread();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_startButton_clicked()
{

}
