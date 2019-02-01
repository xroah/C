#include "notepad.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Notepad w;
    w.show();
    w.setWindowTitle("记事本");
    a.setWindowIcon(QIcon(":/resources/images/notepad.png"));

    return a.exec();
}
