#ifndef VOTINGMODE_H
#define VOTINGMODE_H

#include <QWidget>

namespace Ui {
class votingmode;
}

class votingmode : public QWidget
{
    Q_OBJECT

public:
    explicit votingmode(QWidget *parent = 0);
    ~votingmode();

private:
    Ui::votingmode *ui;
};

#endif // VOTINGMODE_H
