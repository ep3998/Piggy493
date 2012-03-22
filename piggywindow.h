#ifndef PIGGYWINDOW_H
#define PIGGYWINDOW_H

#include <QMainWindow>
class QPushButton;
class QMenuBar;
class QMenu;
class QAction;

class piggyWindow : public QMainWindow
{
    Q_OBJECT
public:
    piggyWindow(QWidget *parent = 0);
signals:
private slots:
private:
    QPushButton *pig1But;
    QPushButton *pig2But;
    QPushButton *pig3But;
    QPushButton *pig4But;
    QPushButton *pig5But;
    QPushButton *pig6But;
    QPushButton *quitBut;
    QMenuBar *menuBar;

    QMenu *fileMenu;
    QAction *quitAction;
    void createMenu();
};
#endif // PIGGYWINDOW_H
