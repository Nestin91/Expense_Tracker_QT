/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionDelete;
    QAction *actionUndo_Delete;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Date_label;
    QDateEdit *Date;
    QHBoxLayout *horizontalLayout;
    QLabel *Category_label;
    QComboBox *Category;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Amount_label;
    QLineEdit *Amount;
    QPushButton *Add_Expense;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Total_label;
    QLineEdit *Total;
    QMenuBar *menubar;
    QMenu *menuNew;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1091, 371);
        MainWindow->setStyleSheet(QString::fromUtf8("/* ===== MAIN WINDOW ===== */\n"
"QMainWindow {\n"
"    background-color: #f2f2f2;   /* Light grey */\n"
"}\n"
"\n"
"/* ===== LABELS ===== */\n"
"QLabel {\n"
"    color: #333;\n"
"    font-size: 13px;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"/* ===== LINE EDIT ===== */\n"
"QLineEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"    padding: 6px;\n"
"    border-radius: 6px;\n"
"    border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"/* ===== DATE EDIT ===== */\n"
"QDateEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"    padding: 6px;\n"
"    border-radius: 6px;\n"
"    border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"/* ===== COMBOBOX ===== */\n"
"QComboBox {\n"
"    background-color: white;\n"
"    color: black;\n"
"    padding: 6px;\n"
"    border-radius: 6px;\n"
"    border: 1px solid #bfbfbf;\n"
"}\n"
"\n"
"/* Dropdown list */\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white;\n"
"    selection-background-color: #4da3ff;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"/* ====="
                        " TABLE ===== */\n"
"QTableWidget {\n"
"    background-color: white;\n"
"    alternate-background-color: #f7f7f7;\n"
"    gridline-color: #d9d9d9;\n"
"    font-size: 12px;\n"
"    border: 1px solid #cfcfcf;\n"
"}\n"
"\n"
"/* ===== TABLE HEADER ===== */\n"
"QHeaderView::section {\n"
"    background-color: #e6e6e6;\n"
"    padding: 5px;\n"
"    border: 1px solid #cfcfcf;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* ===== BUTTON ===== */\n"
"QPushButton {\n"
"    background-color: #4da3ff;\n"
"    color: white;\n"
"    padding: 7px 16px;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #3391ff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2a7de1;\n"
"}"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName("actionDelete");
        actionUndo_Delete = new QAction(MainWindow);
        actionUndo_Delete->setObjectName("actionUndo_Delete");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Date_label = new QLabel(centralwidget);
        Date_label->setObjectName("Date_label");

        horizontalLayout_3->addWidget(Date_label);

        Date = new QDateEdit(centralwidget);
        Date->setObjectName("Date");

        horizontalLayout_3->addWidget(Date);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Category_label = new QLabel(centralwidget);
        Category_label->setObjectName("Category_label");

        horizontalLayout->addWidget(Category_label);

        Category = new QComboBox(centralwidget);
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->addItem(QString());
        Category->setObjectName("Category");

        horizontalLayout->addWidget(Category);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Amount_label = new QLabel(centralwidget);
        Amount_label->setObjectName("Amount_label");

        horizontalLayout_4->addWidget(Amount_label);

        Amount = new QLineEdit(centralwidget);
        Amount->setObjectName("Amount");
        Amount->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(Amount);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        Add_Expense = new QPushButton(centralwidget);
        Add_Expense->setObjectName("Add_Expense");

        horizontalLayout_5->addWidget(Add_Expense);


        verticalLayout->addLayout(horizontalLayout_5);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        Total_label = new QLabel(centralwidget);
        Total_label->setObjectName("Total_label");

        horizontalLayout_2->addWidget(Total_label);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        Total = new QLineEdit(centralwidget);
        Total->setObjectName("Total");

        horizontalLayout_6->addWidget(Total);


        verticalLayout->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1091, 26));
        menuNew = new QMenu(menubar);
        menuNew->setObjectName("menuNew");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNew->menuAction());
        menuNew->addAction(actionNew);
        menuNew->addAction(actionSave);
        menuNew->addSeparator();
        menuNew->addAction(actionDelete);
        menuNew->addAction(actionUndo_Delete);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        actionUndo_Delete->setText(QCoreApplication::translate("MainWindow", "Undo Delete", nullptr));
        Date_label->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        Category_label->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        Category->setItemText(0, QString());
        Category->setItemText(1, QCoreApplication::translate("MainWindow", "Travel", nullptr));
        Category->setItemText(2, QCoreApplication::translate("MainWindow", "Food", nullptr));
        Category->setItemText(3, QCoreApplication::translate("MainWindow", "Utensil", nullptr));
        Category->setItemText(4, QCoreApplication::translate("MainWindow", "Clothing", nullptr));
        Category->setItemText(5, QCoreApplication::translate("MainWindow", "Sports", nullptr));
        Category->setItemText(6, QCoreApplication::translate("MainWindow", "Toilet", nullptr));
        Category->setItemText(7, QCoreApplication::translate("MainWindow", "Stationary", nullptr));

        Amount_label->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        Add_Expense->setText(QCoreApplication::translate("MainWindow", "Add Expense", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Sl.No", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        Total_label->setText(QCoreApplication::translate("MainWindow", "Total Expense", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
