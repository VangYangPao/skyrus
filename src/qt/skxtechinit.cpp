#include "skxtechinit.h"
#include "ui_skxtechinit.h"
#include "net.h"
#include "util.h"
#include "skinize.h"

#include <string>
#include <iostream>

#include <QStringList>
#include <QUrl>

SkxTechInit::SkxTechInit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SkxTechInit)
{
    ui->setupUi(this);
}

SkxTechInit::~SkxTechInit()
{
    delete ui;
}

void SkxTechInit::ShowSkxtechIntro(bool exitAfter)
{
    SkxTechInit skxtechinit;
    skxtechinit.setWindowIcon(QIcon(":icons/skyrus"));
    skxtechinit.setStyleSheet(Skinize());

    if(!skxtechinit.exec())
    {
        if(exitAfter)
            exit(0);
        else
            return;
    }

    QString ServersToAdd = skxtechinit.GetServers();
    QStringList ss = ServersToAdd.split('\n');

    for (int i = 0; i < ss.size(); ++i){
        QString Server = ss.at(i);
        QString strippedServer = Server.remove(' ');
        if(strippedServer != "")
        {
            WriteConfigFile("addanonserver",strippedServer.toStdString());
        }
    }
}

QString SkxTechInit::GetServers()
{
    return ui->plainTextEdit->toPlainText();
}
