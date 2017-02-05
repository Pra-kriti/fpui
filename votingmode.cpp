#include "votingmode.h"
#include "ui_votingmode.h"

votingmode::votingmode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::votingmode)
{
    ui->setupUi(this);
}

votingmode::~votingmode()
{
    delete ui;
}
