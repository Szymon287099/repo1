/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_5;
    QPushButton *jeden;
    QPushButton *piec;
    QPushButton *rowna_sie;
    QPushButton *plus;
    QPushButton *cztery;
    QPushButton *szesc;
    QPushButton *dwa;
    QPushButton *trzy;
    QPushButton *siedem;
    QPushButton *osiem;
    QPushButton *dziewiec;
    QPushButton *zero;
    QPushButton *podzielic;
    QPushButton *minus;
    QPushButton *razy;
    QPushButton *modulo;
    QPushButton *autor;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(350, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(350, 500));
        MainWindow->setMaximumSize(QSize(350, 500));
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 200, 100));
        label->setMinimumSize(QSize(200, 100));
        label->setMaximumSize(QSize(200, 100));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 110, 320, 291));
        gridLayout_5 = new QGridLayout(gridLayoutWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        jeden = new QPushButton(gridLayoutWidget);
        jeden->setObjectName("jeden");

        gridLayout_5->addWidget(jeden, 3, 0, 1, 1);

        piec = new QPushButton(gridLayoutWidget);
        piec->setObjectName("piec");

        gridLayout_5->addWidget(piec, 2, 1, 1, 1);

        rowna_sie = new QPushButton(gridLayoutWidget);
        rowna_sie->setObjectName("rowna_sie");

        gridLayout_5->addWidget(rowna_sie, 4, 3, 1, 1);

        plus = new QPushButton(gridLayoutWidget);
        plus->setObjectName("plus");

        gridLayout_5->addWidget(plus, 2, 3, 1, 1);

        cztery = new QPushButton(gridLayoutWidget);
        cztery->setObjectName("cztery");

        gridLayout_5->addWidget(cztery, 2, 0, 1, 1);

        szesc = new QPushButton(gridLayoutWidget);
        szesc->setObjectName("szesc");

        gridLayout_5->addWidget(szesc, 2, 2, 1, 1);

        dwa = new QPushButton(gridLayoutWidget);
        dwa->setObjectName("dwa");

        gridLayout_5->addWidget(dwa, 3, 1, 1, 1);

        trzy = new QPushButton(gridLayoutWidget);
        trzy->setObjectName("trzy");

        gridLayout_5->addWidget(trzy, 3, 2, 1, 1);

        siedem = new QPushButton(gridLayoutWidget);
        siedem->setObjectName("siedem");

        gridLayout_5->addWidget(siedem, 1, 0, 1, 1);

        osiem = new QPushButton(gridLayoutWidget);
        osiem->setObjectName("osiem");

        gridLayout_5->addWidget(osiem, 1, 1, 1, 1);

        dziewiec = new QPushButton(gridLayoutWidget);
        dziewiec->setObjectName("dziewiec");

        gridLayout_5->addWidget(dziewiec, 1, 2, 1, 1);

        zero = new QPushButton(gridLayoutWidget);
        zero->setObjectName("zero");

        gridLayout_5->addWidget(zero, 4, 1, 1, 1);

        podzielic = new QPushButton(gridLayoutWidget);
        podzielic->setObjectName("podzielic");

        gridLayout_5->addWidget(podzielic, 0, 3, 1, 1);

        minus = new QPushButton(gridLayoutWidget);
        minus->setObjectName("minus");

        gridLayout_5->addWidget(minus, 3, 3, 1, 1);

        razy = new QPushButton(gridLayoutWidget);
        razy->setObjectName("razy");

        gridLayout_5->addWidget(razy, 1, 3, 1, 1);

        modulo = new QPushButton(gridLayoutWidget);
        modulo->setObjectName("modulo");

        gridLayout_5->addWidget(modulo, 0, 2, 1, 1);

        autor = new QPushButton(gridLayoutWidget);
        autor->setObjectName("autor");

        gridLayout_5->addWidget(autor, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 350, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Kalkulator", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        jeden->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        piec->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        rowna_sie->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        cztery->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        szesc->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        dwa->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        trzy->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        siedem->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        osiem->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        dziewiec->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        podzielic->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        razy->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        modulo->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        autor->setText(QCoreApplication::translate("MainWindow", "O Autorze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
