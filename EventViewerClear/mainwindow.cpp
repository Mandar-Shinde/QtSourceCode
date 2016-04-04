#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <stdio.h>
#include <qmessagebox.h>

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

void MainWindow::on_buClear_clicked()
{
    HANDLE hEventLog = NULL;
    // The source name (provider) must exist as a subkey of Application.
    QString appname=ui->leAppName->text();
    hEventLog = RegisterEventSource(NULL, (const wchar_t*)appname.utf16());
    if (NULL == hEventLog)
    {
        QMessageBox::information(this,appname.append(" Logs"),"RegisterEventSource failed ");
    }
    else
    {
        ClearEventLog(hEventLog,NULL );
        QMessageBox::information(this,appname.append(" Logs"),"Logs Cleared");
    }

    if (hEventLog)
        DeregisterEventSource(hEventLog);
}
