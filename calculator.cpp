#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Power (int num, int power)
{
    int res = 1;
    for (int i = 0; i < power; i++)
    {
        res *= num;
    }

    return res;
}
