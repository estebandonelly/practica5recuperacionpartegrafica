#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_boton1_clicked()
{
    //mi_texto = ui->cajatexto->text();
    //ui->etiqueta->setText(mi_texto);
    cuenta++;
    ui->etiqueta->setText(QString::number(cuenta));
    QMessageBox::information(this, "Caption", QString::number(cuenta));
}

void MainWindow::on_boton2_clicked()
{
    //ui->cajatexto->clear();
    cuenta--;
    ui->etiqueta->setText(QString::number(cuenta));
}
