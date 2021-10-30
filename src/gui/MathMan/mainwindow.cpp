#include "mainwindow.h"
#include "ui_mainwindow.h"

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



void MainWindow::on_actionProgram_triggered()
{
    QMessageBox msgBox;
    QString text = "\n\n\n\nAuthor: SaQr AlGhamdi <h7lc0n@gmail.com>\n\nBrief: This is a simple program to solve Math3 book problems.\n\nVersion: v0.1";

    msgBox.setIconPixmap(QPixmap(":/images/MathMan.ico"));
    msgBox.setText(text);
    QPushButton *donateButton = msgBox.addButton(tr("Donate"), QMessageBox::ActionRole);
    QPushButton *cancelButton = msgBox.addButton(QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);

    msgBox.exec();

    if (msgBox.clickedButton() == donateButton) {
        QDesktopServices::openUrl(QUrl("https://paypal.me/SaQr07"));
    } else if (msgBox.clickedButton() == cancelButton) {
        msgBox.close();
    }
}


void MainWindow::on_actionExit_triggered()
{
    MainWindow::~MainWindow();
    exit(0);
}

