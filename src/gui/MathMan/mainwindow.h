#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <bits/stdc++.h>
#include <QPixmap>
#include <QUrl>
#include <QDesktopServices>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionProgram_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
