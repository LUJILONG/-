#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    // QString QString_num = QString::fromStdString(num);  // 将std::string转换为QString类型
    ui->setupUi(this);
    readfile();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::cle_mark()
{
    if(mark==1)
    {
        mark=0;
        QString_num="";
        ui->lineEdit->setText(QString_num);
    }
}

void MainWindow::readfile()
{
    QFile file("history.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "File opened successfully";
        QTextStream in(&file);
        String = in.readAll();
        qDebug() << "File content: " << String;
        // String=fileContent
        ui->textEdit->setPlainText(String);
         file.close();  // 创建成功后关闭文件
    } else {
        std::cerr << "Error opening file!" << std::endl;
        // 如果文件不存在，可以在这里选择是否创建一个空文件
        if (!file.exists()) {
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                file.close();
                qDebug() << "Empty file created successfully";
            } else {
                qDebug() << "Failed to create empty file";
            }
        }
    }
}

void MainWindow::writefile()
{
    // 获取 QTextEdit 的内容
    QString fileContent = ui->textEdit->toPlainText();  // 获取纯文本内容

    // // 创建文件对象，打开文件进行写入
     QFile file("history.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << fileContent;  // 将 QTextEdit 的内容写入文件

        file.close();  // 关闭文件
        qDebug() << "File saved successfully!";
    } else {
        qCritical() << "Error opening file for writing!";
    }
}


void MainWindow::on_one_clicked()
{
    cle_mark();
    QString_num+="1";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_two_clicked()
{
    cle_mark();
    QString_num+="2";
    ui->lineEdit->setText(QString_num);
}

void MainWindow::on_three_clicked()
{
    cle_mark();
    QString_num+="3";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_four_clicked()
{
    cle_mark();
    QString_num+="4";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_five_clicked()
{
    cle_mark();
    QString_num+="5";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_six_clicked()
{
    cle_mark();
    QString_num+="6";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_seven_clicked()
{
    cle_mark();
    QString_num+="7";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_eight_clicked()
{
    cle_mark();
    QString_num+="8";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_nine_clicked()
{
    cle_mark();
    QString_num+="9";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_zero_clicked()
{
    cle_mark();
    QString_num+="0";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_AC_clicked()
{
    QString_num="";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_dot_clicked()
{
    // if(mark==1)
    // {
    //     mark=0;
    //     QString_num="0";
    // }
    QString_num+=".";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_back_clicked()
{
    QString_num.chop(1); //删除字符串最后一个字母
    ui->lineEdit->setText(QString_num);
}





void MainWindow::on_add_clicked()
{
    operation.number1=QString_num.toDouble();
    flag='+';

    // QString_num1=QString_num;

    QString_num+="+";
    ui->lineEdit->setText(QString_num);
    QString_len=QString_num.length();


    // String+='+';
    // ui->textEdit->setText(String);
}


void MainWindow::on_equal_clicked()
{
    operation.number2=(QString_num.mid(QString_len)).toDouble();
    // operation.number2=QString_num.toDouble();

    // String+="=";
    QString_num+="=";
    switch (flag) {
    case '+':
        QString_num+=QString::number(add(operation.number1,operation.number2));
        break;
    case '-':
        QString_num+=QString::number(subtract(operation.number1,operation.number2));
        break;
    case '*':
        QString_num+=QString::number(multiply(operation.number1,operation.number2));
        break;
    case '/':
        QString_num+=QString::number(divide(operation.number1,operation.number2));
        break;
    default:
        break;
    }

    ui->lineEdit->setText(QString_num);

    String+=QString_num+"\n";
    ui->textEdit->setText(String);
    writefile();
    mark=1;

}


void MainWindow::on_subtract_clicked()
{
    operation.number1=QString_num.toDouble();
    flag='-';

    QString_num+="-";
    ui->lineEdit->setText(QString_num);
    QString_len=QString_num.length();
    // String+='-';
    // ui->textEdit->setText(String);
}


void MainWindow::on_multiply_clicked()
{
    operation.number1=QString_num.toDouble();
    flag='*';

    QString_num+="×";
    ui->lineEdit->setText(QString_num);
    QString_len=QString_num.length();
    // String+="×";
    // ui->textEdit->setText(String);
}


void MainWindow::on_division_clicked()
{
    operation.number1=QString_num.toDouble();
    flag='/';

    QString_num+="÷";
    ui->lineEdit->setText(QString_num);
    QString_len=QString_num.length();
    // String+="÷";
    // ui->textEdit->setText(String);
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    // ui->lineEdit->setText(QString_num);
    // String+=QString_num;
    // ui->textEdit->setText(String);
}


void MainWindow::on_zerozero_clicked()
{
    QString_num+="00";
    ui->lineEdit->setText(QString_num);
}


void MainWindow::on_pushButton_3_clicked()
{
    String="";
    ui->textEdit->setText(String);
    writefile();
}





