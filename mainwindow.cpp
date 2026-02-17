#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ===== Date Setup =====
    ui->Date->setDate(QDate::currentDate());
    ui->Date->setDisplayFormat("dd-MM-yyyy");
    ui->Date->setCalendarPopup(true);


    // ===== TABLE SETUP =====
    ui->tableWidget->setColumnCount(4);

    ui->tableWidget->setHorizontalHeaderLabels({"Sl.No","Date","Category","Amount"});

    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    connect(ui->tableWidget, &QTableWidget::cellDoubleClicked, this, &MainWindow::editCell);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Add_Expense_clicked()
{
    // ===== GET VALUES =====
    QString date = ui->Date->date().toString("dd-MM-yyyy");

    QString category = ui->Category->currentText();

    double amount = ui->Amount->text().toDouble();
    if(amount <= 0)
        return;

    // ===== INSERT ROW =====
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(row + 1)));

    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(date));
    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(category));
    ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(amount)));

    // ===== TOTAL CALC =====
    totalAmount += amount;

    ui->Total->setText(QString::number(totalAmount));

    // ===== CLEAR AMOUNT =====
    ui->Amount->clear();
}

void MainWindow::on_actionNew_triggered()
{
    ui->tableWidget->setRowCount(0);
    totalAmount = 0;

    ui->Total->clear();
    ui->Amount->clear();
}

void MainWindow::on_actionDelete_triggered()
{
    int row =
        ui->tableWidget->currentRow();

    if(row < 0)
        return;

    // Store deleted data
    lastDeleted.row = row;
    lastDeleted.date = ui->tableWidget->item(row,1)->text();
    lastDeleted.category = ui->tableWidget->item(row,2)->text();
    lastDeleted.amount = ui->tableWidget->item(row,3)->text().toDouble();

    hasDeleted = true;

    totalAmount -= lastDeleted.amount;

    ui->tableWidget->removeRow(row);

    // Renumber
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i+1)));
    }

    ui->Total->setText(QString::number(totalAmount));
}


void MainWindow::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save Excel File", "", "Excel Files (*.csv)");

    if(fileName.isEmpty())
        return;

    QFile file(fileName);

    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::warning(this,"Error","File not saved");
        return;
    }

    QTextStream out(&file);

    // Excel Header Row
    out << "Sl.No,Date,Category,Amount\n";

    for(int i=0; i<ui->tableWidget->rowCount(); i++)
    {
        out << ui->tableWidget->item(i,0)->text() << ","
            << ui->tableWidget->item(i,1)->text() << ","
            << ui->tableWidget->item(i,2)->text() << ","
            << ui->tableWidget->item(i,3)->text() << "\n";
    }

    // ===== BLANK LINE =====
    out << "\n";

    // ===== TOTAL EXPENSE =====
    out << "Total Expense,,," << ui->Total->text() << "\n";

    file.close();

    QMessageBox::information(this,"Saved","Excel file saved successfully");
}

void MainWindow::editCell(int row, int column)
{
    Q_UNUSED(column);

    // Load row data into inputs
    QString date = ui->tableWidget->item(row,1)->text();

    QString category = ui->tableWidget->item(row,2)->text();

    double amount = ui->tableWidget->item(row,3)->text().toDouble();

    // Set values back to UI
    ui->Date->setDate(QDate::fromString(date,"dd-MM-yyyy"));

    ui->Category->setCurrentText(category);

    ui->Amount->setText(QString::number(amount));

    // Remove old row
    totalAmount -= amount;
    ui->tableWidget->removeRow(row);

    // Update serial numbers
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i+1)));
    }

    ui->Total->setText(QString::number(totalAmount));
}

void MainWindow::on_actionUndo_Delete_triggered()
{
    if(!hasDeleted)
        return;

    int row = lastDeleted.row;

    ui->tableWidget->insertRow(row);

    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(row+1)));

    ui->tableWidget->setItem(row, 1,new QTableWidgetItem(lastDeleted.date));

    ui->tableWidget->setItem(row, 2, new QTableWidgetItem(lastDeleted.category));

    ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(lastDeleted.amount)));

    totalAmount += lastDeleted.amount;

    ui->Total->setText(QString::number(totalAmount));

    // Renumber again
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i+1)));
    }

    hasDeleted = false;
}

