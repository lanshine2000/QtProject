#ifndef CALCULATORUI_H
#define CALCULATORUI_H

#include <QDialog>
#include <QDebug>
#include <model.h>

namespace Ui {
class CalculatorUI;
}

class CalculatorUI : public QDialog
{
    Q_OBJECT

public:
    explicit CalculatorUI(QWidget *parent = 0);
    ~CalculatorUI();

private slots:
    void getBut0();

    void getBut1();

    void getBut2();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_add_clicked();

    void on_btn_sub_clicked();

    void on_btn_mul_clicked();

    void on_btn_div_clicked();

    void on_btn_equal_clicked();

    void on_btn_clear_clicked();

private:
    QString temp;
    Ui::CalculatorUI *ui;//界面对象
    model* mode; //核心功能的model类的对象
};

#endif // CALCULATORUI_H
