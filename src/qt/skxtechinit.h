#ifndef SKXTECHINIT_H
#define SKXTECHINIT_H

#include <QDialog>

namespace Ui {
class SkxTechInit;
}

class SkxTechInit : public QDialog
{
    Q_OBJECT

public:
    explicit SkxTechInit(QWidget *parent = 0);
    ~SkxTechInit();
    QString GetServers();
    void ShowSkxtechIntro(bool exitAfter = true);

private:
    Ui::SkxTechInit *ui;
};

#endif // SKXTECHINIT_H
