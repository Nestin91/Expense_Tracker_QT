#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDate>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

struct DeletedRowData
{
    QString date;
    QString category;
    double amount;
    int row;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Add_Expense_clicked();

    void on_actionNew_triggered();     // NEW
    void on_actionDelete_triggered();  // DELETE
    void on_actionSave_triggered();    // SAVE

    void on_actionUndo_Delete_triggered();

    void editCell(int row, int column);

private:
    Ui::MainWindow *ui;
    double totalAmount = 0.0;

    DeletedRowData lastDeleted;  // For undo
    bool hasDeleted = false;
};
#endif // MAINWINDOW_H
