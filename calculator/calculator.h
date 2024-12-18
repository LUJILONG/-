#ifndef CALCULATOR_H
#define CALCULATOR_H
// #include <iostream>
#include <stdlib.h>
#include "qstring.h"
using namespace std;
class calculator
{
public:
    calculator();
    // // 函数声明
    double add(double num1,double num2);
    double subtract(double num1,double num2);
    double multiply(double num1,double num2);
    double divide(double num1,double num2);

    // void subtract();
    // void multiply();
    // void divide();
    // void recall();
    // void clearMemory();

    double number1, number2;
};

#endif // CALCULATOR_H
