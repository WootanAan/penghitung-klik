#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pengelolajumlahklik.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PengelolaJumlahKlik klik;
    int jml = klik.getJmlKlik();
    ui->label->setText(QString::number(jml));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tombol_clicked()
{
    PengelolaJumlahKlik klik;
    klik.tambahKlik();
    int jml = klik.getJmlKlik();
    ui->label->setText(QString::number(jml));
}

void MainWindow::on_reset_clicked()
{
    PengelolaJumlahKlik klik;
    klik.reset();
    ui->label->setText(QString::number(klik.getJmlKlik()));
}

void MainWindow::on_tombol_kurang_clicked()
{
    PengelolaJumlahKlik klik;
    klik.kurang();
    ui->label->setText(QString::number(klik.getJmlKlik()));
}
