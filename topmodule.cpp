#include "topmodule.h"
#include "ui_topmodule.h"

topModule::topModule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::topModule)
{
    ui->setupUi(this);
}

topModule::~topModule()
{
    delete ui;
}
