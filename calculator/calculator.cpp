#include "calculator.h"

calculator::calculator() {

}

double calculator::add(double num1,double num2)
{
    // number1 = num1.toDouble();
    // number2 = num2.toDouble();
    // std:: cout<<"请输入第一个数"<< endl;
    // std:: cout<<"请输入第二个数"<< endl;
    //     double num1, num2;
    //     printf("请输入第一个数: ");
    //     scanf("%lf", &num1);
    //     printf("请输入第二个数: ");
    //     scanf("%lf", &num2);
    //     memory = num1 + num2;
    //     printf("结果: %.2lf\n", memory);
    return  num1+num2;
}

double calculator::subtract(double num1, double num2)
{
    return  num1-num2;
}

double calculator::multiply(double num1, double num2)
{
    return  num1*num2;
}

double calculator::divide(double num1, double num2)
{
    return  num1/num2;
}




