/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *AC;
    QPushButton *back;
    QPushButton *pushButton_3;
    QPushButton *division;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *multiply;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *subtract;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *add;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *zerozero;
    QPushButton *zero;
    QPushButton *dot;
    QPushButton *equal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(403, 573);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 399, 523));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);

        verticalLayout_2->addWidget(textEdit);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        AC = new QPushButton(layoutWidget);
        AC->setObjectName("AC");
        AC->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(AC);

        back = new QPushButton(layoutWidget);
        back->setObjectName("back");
        back->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(back);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(pushButton_3);

        division = new QPushButton(layoutWidget);
        division->setObjectName("division");
        division->setMinimumSize(QSize(50, 50));

        horizontalLayout->addWidget(division);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        seven = new QPushButton(layoutWidget);
        seven->setObjectName("seven");
        seven->setMinimumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(seven);

        eight = new QPushButton(layoutWidget);
        eight->setObjectName("eight");
        eight->setMinimumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(eight);

        nine = new QPushButton(layoutWidget);
        nine->setObjectName("nine");
        nine->setMinimumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(nine);

        multiply = new QPushButton(layoutWidget);
        multiply->setObjectName("multiply");
        multiply->setMinimumSize(QSize(50, 50));

        horizontalLayout_2->addWidget(multiply);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        four = new QPushButton(layoutWidget);
        four->setObjectName("four");
        four->setMinimumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(four);

        five = new QPushButton(layoutWidget);
        five->setObjectName("five");
        five->setMinimumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(five);

        six = new QPushButton(layoutWidget);
        six->setObjectName("six");
        six->setMinimumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(six);

        subtract = new QPushButton(layoutWidget);
        subtract->setObjectName("subtract");
        subtract->setMinimumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(subtract);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        one = new QPushButton(layoutWidget);
        one->setObjectName("one");
        one->setMinimumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(one);

        two = new QPushButton(layoutWidget);
        two->setObjectName("two");
        two->setMinimumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(two);

        three = new QPushButton(layoutWidget);
        three->setObjectName("three");
        three->setMinimumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(three);

        add = new QPushButton(layoutWidget);
        add->setObjectName("add");
        add->setMinimumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(add);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        zerozero = new QPushButton(layoutWidget);
        zerozero->setObjectName("zerozero");
        zerozero->setMinimumSize(QSize(50, 50));

        horizontalLayout_5->addWidget(zerozero);

        zero = new QPushButton(layoutWidget);
        zero->setObjectName("zero");
        zero->setMinimumSize(QSize(50, 50));

        horizontalLayout_5->addWidget(zero);

        dot = new QPushButton(layoutWidget);
        dot->setObjectName("dot");
        dot->setMinimumSize(QSize(50, 50));

        horizontalLayout_5->addWidget(dot);

        equal = new QPushButton(layoutWidget);
        equal->setObjectName("equal");
        equal->setMinimumSize(QSize(50, 50));

        horizontalLayout_5->addWidget(equal);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 403, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250", nullptr));
        AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        division->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        multiply->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        subtract->setText(QCoreApplication::translate("MainWindow", "\357\274\215", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "\357\274\213", nullptr));
        zerozero->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "\357\274\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
