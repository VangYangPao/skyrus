#ifndef SKXTECHITEM_H
#define SKXTECHITEM_H

#include <QWidget>

namespace Ui {
class skxtechitem;
}

class skxtechitem : public QWidget
{
    Q_OBJECT

public:
    explicit skxtechitem(QWidget *parent = 0);
    ~skxtechitem();
    void setHost(QString hostStr);
    void setName(QString nameStr);

private:
    Ui::skxtechitem *ui;
    QString host;
    QString name;
};

#endif // SKXTECHITEM_H
