#ifndef SKXTECHSETUP_H
#define SKXTECHSETUP_H

#include "wallet/skxtech.h"

#include <QDialog>
#include <QVBoxLayout>

namespace Ui {
class skxtechsetup;
}

class skxtechsetup : public QDialog
{
    Q_OBJECT

public:
    explicit skxtechsetup(QWidget *parent = 0);
    ~skxtechsetup();

private:
    Ui::skxtechsetup *ui;

public Q_SLOTS:
    void reloadSkxtechServers();
    void addSkxtechServer();
    void removeSkxtechServer();
    void getinfoSkxtechServer();
    void showButtons(bool show=true);
    void showSkxtechIntro();

};

#endif // SKXTECHSETUP_H
