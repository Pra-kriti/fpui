#ifndef WIDGET_H
#define WIDGET_H

#include <QFileInfo>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include<QMessageBox>
#include <QSqlQuery>
#include <QString>
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    QSqlDatabase myDB;
    void connClose()
    {
        myDB.close();
        myDB.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen()
    {     myDB= QSqlDatabase::addDatabase("QSQLITE");
          myDB.setDatabaseName("/home/prakriti/fpui/dataall.sqlite");
         if(myDB.open())
                {
                    qDebug()<<(" connected! ");
                    return true;
                }


            else
            {
                qDebug()<<("Failure connection to db file");
                connClose();
                QMessageBox::warning(this,"DATABASE UNRECOGNIZED","FAILURE CONNECTION TO DATABASE");
                exit(0);
               // close();
                return false;
            }
    }
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
    QString ID,name,nov;
};

#endif // WIDGET_H
