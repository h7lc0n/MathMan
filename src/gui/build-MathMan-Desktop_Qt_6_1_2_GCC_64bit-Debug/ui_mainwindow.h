/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionDay;
    QAction *actionNight;
    QAction *actionProgram;
    QAction *actionDocument;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *image;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuTheme;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(394, 337);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionDay = new QAction(MainWindow);
        actionDay->setObjectName(QString::fromUtf8("actionDay"));
        actionNight = new QAction(MainWindow);
        actionNight->setObjectName(QString::fromUtf8("actionNight"));
        actionProgram = new QAction(MainWindow);
        actionProgram->setObjectName(QString::fromUtf8("actionProgram"));
        actionDocument = new QAction(MainWindow);
        actionDocument->setObjectName(QString::fromUtf8("actionDocument"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 200, 141, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("URW Gothic")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        image = new QLabel(centralwidget);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(10, 10, 161, 261));
        image->setPixmap(QPixmap(QString::fromUtf8(":/images/MathMan.ico")));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(190, 110, 181, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 394, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTheme = new QMenu(menuView);
        menuTheme->setObjectName(QString::fromUtf8("menuTheme"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionExit);
        menuView->addAction(menuTheme->menuAction());
        menuTheme->addAction(actionDay);
        menuTheme->addSeparator();
        menuTheme->addAction(actionNight);
        menuAbout->addAction(actionProgram);
        menuAbout->addAction(actionDocument);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDay->setText(QCoreApplication::translate("MainWindow", "Day", nullptr));
        actionNight->setText(QCoreApplication::translate("MainWindow", "Night", nullptr));
        actionProgram->setText(QCoreApplication::translate("MainWindow", "Program", nullptr));
        actionDocument->setText(QCoreApplication::translate("MainWindow", "Document", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        image->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Quadratic Equation", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Real Numbers", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Complex", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Matrix", nullptr));

        comboBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Math Problems", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuTheme->setTitle(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
