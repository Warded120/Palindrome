
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    template<typename T>
    void pop_up(T thing)
    {
        QMessageBox::information(this, "pop-up", QString(thing));
    }

//    template<typename T>
//    void print(T thing)
//    {
//        ui->result.SetPLainText(QString(thing));
//    }

private slots:

    void on_bbb_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
