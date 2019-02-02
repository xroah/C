#include "notepad.h"
#include "manager.h"
#include <QApplication>
#include <QIcon>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication *a = new QApplication(argc, argv);
    Notepad w;
    Manager *m = new Manager(&w, a);
    m->connectExit(&w);
    w.show();
    w.setWindowTitle("记事本");
    a->setWindowIcon(QIcon(":/resources/images/notepad.png"));

    return a->exec();
}

