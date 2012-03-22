#include <QtGui>
#include <QDialog>
#include "piggywindow.h"
#include "toeButtonGroup.h"

piggyWindow::piggyWindow(QWidget *parent) :
    QMainWindow(parent)
{
    //Setup toe buttons
    pig1But = new QPushButton("toe 1");
    pig2But = new QPushButton("toe 2");
    pig3But = new QPushButton("toe 3");
    pig4But = new QPushButton("toe 4");
    pig5But = new QPushButton("toe 5");
    pig6But = new QPushButton("toe 6");
    quitBut = new QPushButton("quit");

    connect(quitBut, SIGNAL(clicked()), this, SLOT(close()));

    //Setup control group for toe buttons
    toeButtonGroup *toeGroup = new toeButtonGroup(this);
    toeGroup->addButton(pig1But, 1);
    toeGroup->addButton(pig2But, 2);
    toeGroup->addButton(pig3But, 3);
    toeGroup->addButton(pig4But, 4);
    toeGroup->addButton(pig5But, 5);
    toeGroup->addButton(pig6But, 6);

    //Main Window -> Grid Layout
    QGridLayout *buttonLayout = new QGridLayout;
    buttonLayout->addWidget(pig1But, 0,0);
    buttonLayout->addWidget(pig2But, 0,1);
    buttonLayout->addWidget(pig3But, 0,2);
    buttonLayout->addWidget(pig4But, 1,0);
    buttonLayout->addWidget(pig5But, 1,1);
    buttonLayout->addWidget(pig6But, 1,2);
    buttonLayout->addWidget(quitBut, 2,1);

    //Menu Bar
    createMenu();
    setMenuBar(menuBar);

    //Dummy Layout
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(buttonLayout);
    setWindowTitle(tr("Piggy"));

    //Dummy Widget to act as CentralWidget
    QWidget *central = new QWidget();
    central->setLayout(mainLayout);
    this->setCentralWidget(central);
}

//Create the menu bar for the main window
void piggyWindow::createMenu()
{
    menuBar = new QMenuBar;
    fileMenu = new QMenu(tr("&File"), this);
    quitAction = fileMenu->addAction(tr("E&xit"));
    menuBar->addMenu(fileMenu);

    connect(quitAction, SIGNAL(triggered()),this,SLOT(close()));
}
