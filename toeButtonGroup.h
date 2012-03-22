#ifndef TOEBUTTONGROUP_H
#define TOEBUTTONGROUP_H

#include <QButtonGroup>
#include <QPushButton>
#include <QMessageBox>

//Purpose: act as abstract container for toe buttons
//Files: toeButtonGroup.h
class toeButtonGroup: public QButtonGroup
{
    Q_OBJECT
    public:
    toeButtonGroup(QWidget* parent)
    {
        this->setParent(parent);

        connect(this, SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(buttonClick(QAbstractButton*)));
    }

    ~toeButtonGroup(){}

    public slots:
    void buttonClick(QAbstractButton* button)
    {
        QMessageBox* box = new QMessageBox();
        box->setModal(true);
        if(button->text() == "toe 1")
            box->setText("This little piggy went to market.");
        else if(button->text() == "toe 2")
            box->setText("This little piggy stayed home.");
        else if(button->text() == "toe 3")
            box->setText("This little piggy had roast beef.");
        else if(button->text() == "toe 4")
            box->setText("This little piggy had none.");
        else if(button->text() == "toe 5")
            box->setText("This little piggy went wee wee wee all the way home... or did he?");
        else if(button->text() == "toe 6")
            box->setText("This little piggy had 6 toes, and now we see if he can actually do anything...");
        box->show();
    }

};
#endif // TOEBUTTONGROUP_H
