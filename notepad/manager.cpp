#include "manager.h"

Manager::Manager(QObject *parent, QApplication *app) : QObject(parent)
{
    this->app = app;
}

void Manager::connectExit(Notepad *n)
{
    connect(n, SIGNAL(exit()), this, SLOT(exitApp()));
}

void Manager::exitApp()
{
    app->exit();
}

