#include <QApplication>
#include "piggywindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    piggyWindow *myDialog = new piggyWindow;
    myDialog->show();
    return app.exec();
}
