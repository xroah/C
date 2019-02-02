#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include <QApplication>
#include "notepad.h"

class Manager : public QObject
{
    Q_OBJECT
private:
    QApplication *app;
public:
    explicit Manager(QObject *parent = nullptr, QApplication *a = nullptr);
    void connectExit(Notepad *);

signals:
    void exit();

public slots:
    void exitApp();
};

#endif // MANAGER_H
