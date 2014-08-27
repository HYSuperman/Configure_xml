#ifndef TOPMODULE_H
#define TOPMODULE_H

#include <QWidget>

namespace Ui {
class topModule;
}

class topModule : public QWidget
{
    Q_OBJECT

public:
    explicit topModule(QWidget *parent = 0);
    ~topModule();

private:
    Ui::topModule *ui;
};

#endif // TOPMODULE_H
