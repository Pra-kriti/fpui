#include "widget.h"
#include "ui_widget.h"
#include <QSqlQueryModel>
#include "votingmode.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

void Widget::on_pushButton_clicked()
{
    connOpen();
    ID = ui->label->text();
    name = ui->label_2->text();
    nov = ui->label_3->text();
    QSqlQuery *qry=new QSqlQuery(this->myDB);
    QSqlQueryModel *modal=new QSqlQueryModel;
    qry->prepare("INSERT INTO addcandidate (ID,NAME,NUMBER_OF_VOTES) VALUES (\'"+ID+"\',\'"+name+"\',\'"+nov+"\')");
    qry->exec();
    modal->setQuery(*qry);
    connClose();

    votingmode* vm=new votingmode;
    vm->show();
}

void Widget::on_pushButton_2_clicked()
{
    this->close();
}

Widget::~Widget()
{
    delete ui;
    qDebug()<<"Closing the connection";
    myDB.close();
}

