#include "calculatorui.h"
#include "ui_calculatorui.h"

CalculatorUI::CalculatorUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalculatorUI)
{
    ui->setupUi(this);
    connect(this->ui->btn_0,SIGNAL(clicked(bool)),this,SLOT(getBut0()));
    //connect(this->ui->btn_0,QPushButton::clicked(),this,)
    connect(this->ui->btn_1,SIGNAL(clicked(bool)),this,SLOT(getBut1()));
    connect(this->ui->btn_2,SIGNAL(clicked(bool)),this,SLOT(getBut2()));
    this->mode = new model;
    this->temp="";


}

CalculatorUI::~CalculatorUI()
{
    delete ui;
}

void CalculatorUI::getBut0()
{
    if(this->temp!="")
    {
        this->temp+=this->ui->btn_0->text();
        this->ui->label_display->setText(this->temp);
    }

}


void CalculatorUI::getBut1()
{
    this->temp+=this->ui->btn_1->text();
    this->ui->label_display->setText(this->temp);
}

void CalculatorUI::getBut2()
{
    this->temp+=this->ui->btn_2->text();
    this->ui->label_display->setText(this->temp);

}

void CalculatorUI::on_btn_3_clicked()
{
    this->temp+=this->ui->btn_3->text();
    this->ui->label_display->setText(this->temp);

}

void CalculatorUI::on_btn_4_clicked()
{
    this->temp+=this->ui->btn_4->text();
    this->ui->label_display->setText(this->temp);
}

void CalculatorUI::on_btn_5_clicked()
{
    this->temp+=this->ui->btn_5->text();
    this->ui->label_display->setText(this->temp);
}

void CalculatorUI::on_btn_6_clicked()
{
    this->temp+=this->ui->btn_6->text();
    this->ui->label_display->setText(this->temp);
}

void CalculatorUI::on_btn_7_clicked()
{
    this->temp+=this->ui->btn_7->text();
    this->ui->label_display->setText(this->temp);
}

void CalculatorUI::on_btn_8_clicked()
{
    this->temp+=this->ui->btn_8->text();
    this->ui->label_display->setText(this->temp);

}

void CalculatorUI::on_btn_9_clicked()
{
    this->temp+=this->ui->btn_9->text();
    this->ui->label_display->setText(this->temp);

}

void CalculatorUI::on_btn_add_clicked()
{
    int num = this->temp.toInt();
    this->mode->setNum1(num);
    this->temp="";
    QString ex=this->ui->btn_add->text();
    this->mode->setFlag(ex);
}

void CalculatorUI::on_btn_sub_clicked()
{
    int num = this->temp.toInt();
    this->mode->setNum1(num);
    this->temp="";
    QString ex=this->ui->btn_sub->text();
    this->mode->setFlag(ex);
}

void CalculatorUI::on_btn_mul_clicked()
{
    int num = this->temp.toInt();
    this->mode->setNum1(num);
     this->temp="";
    QString ex=this->ui->btn_mul->text();
    this->mode->setFlag(ex);
}

void CalculatorUI::on_btn_div_clicked()
{ int num = this->temp.toInt();
    this->mode->setNum1(num);
     this->temp="";
    QString ex=this->ui->btn_div->text();
    this->mode->setFlag(ex);

}

void CalculatorUI::on_btn_equal_clicked()
{
    int num=this->temp.toInt();
    this->mode->setNum2(num);
    QString res= this->mode->doExpr();
    this->ui->label_display->setText(res);
     this->temp="";
}

void CalculatorUI::on_btn_clear_clicked()
{
    this->temp="";
    this->ui->label_display->setText("0");
}
