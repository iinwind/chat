#include "denglu.h"
#include "ui_denglu.h"
#include<QIcon>

denglu::denglu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::denglu)
{
    ui->setupUi(this);
    //设置图标
    this->setWindowIcon(QIcon(":/images/qq.png"));
    //设置名称
    this->setWindowTitle("qq 2024");

}

denglu::~denglu()
{
    delete ui;
}
