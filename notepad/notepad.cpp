#include "notepad.h"
#include "ui_notepad.h"
#include <QMessageBox>

Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
    //    ui->toolBar->setMovable(false);
}

void Notepad::on_actionNew_triggered()
{
    QString text = ui->textEdit->toPlainText();
    if (text.size()) {
        QMessageBox::StandardButton btn = QMessageBox::question(
                    this,
                    "消息",
                    "未保存",
                    QMessageBox::StandardButtons(QMessageBox::Yes | QMessageBox::No),
                    QMessageBox::Yes
                    );
        if (btn == QMessageBox::No) {
            ui->textEdit->clear();
        }
    }
}

void Notepad::on_actionOpen_triggered()
{

}

void Notepad::on_actionSave_triggered()
{

}

void Notepad::on_actionSaveAs_triggered()
{

}

void Notepad::on_actionExit_triggered()
{
    emit exit();
}

void Notepad::on_actionCut_triggered()
{

}

void Notepad::on_actionCopy_triggered()
{

}

void Notepad::on_actionPaste_triggered()
{

}

void Notepad::on_actionDel_triggered()
{

}

Notepad::~Notepad()
{
    delete ui;
}
