#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<qmessagebox.h>
#include<loginandregister.h>
#include<phonesbook.h>
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


void MainWindow::on_btnLogin_clicked()
{
    QMessageBox msgBox;
    QString user=ui->username->text();
    QString pass=ui->password->text();
    int lenuser=user.length();
    int lenpass=pass.length();
    if(lenuser>0&&lenpass>0)
    {
        if( checkexists(user.toStdString(),
                        pass.toStdString()))
        {

            Phonesbook *dialog=new Phonesbook();
            dialog->show();

        }
        else{
            msgBox.setText("Not Exists");
            msgBox.setWindowTitle("Not Found Error");
            msgBox.exec();

        }

    }
    else{
        msgBox.setText("Fill username and password");
        msgBox.setWindowTitle("Empty");
        msgBox.exec();
    }
}
