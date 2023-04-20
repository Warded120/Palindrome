
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bbb_clicked()
{
    QString str = ui->infobox->toPlainText();

    if(!str.length())
    {
        pop_up("Input is empty");
        return;
    }

    for (int i = 0; i < str.length()/2; ++i) {
        if(str[i] != str[str.length() - i - 1])
        {
            pop_up(str + " Is not a palindrome");
            return;
        }
    }
    pop_up(str + " Is a palindrome");
}

