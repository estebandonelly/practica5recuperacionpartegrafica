#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_boton1_clicked();

    void on_boton2_clicked();

private:
    Ui::MainWindow *ui;
    QString mi_texto = "";
    int cuenta = 0;

};

#endif // MAINWINDOW_H
