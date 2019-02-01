#include "notepad.h"
#include "ui_notepad.h"

Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    ui->toolBar->setMovable(false);
}

Notepad::~Notepad()
{
    delete ui;
}
