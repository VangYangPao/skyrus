#include "skxtechitem.h"
#include "ui_skxtechitem.h"

skxtechitem::skxtechitem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::skxtechitem),
    host(""),
    name("")
{
    ui->setupUi(this);
}

void skxtechitem::setHost(QString hostStr)
{
    host = hostStr;
    ui->serverHostLabel->setText(hostStr);
}

void skxtechitem::setName(QString nameStr)
{
    name = nameStr;
    ui->serverNameLabel->setText(nameStr);
}

skxtechitem::~skxtechitem()
{
    delete ui;
}
