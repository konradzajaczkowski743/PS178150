#include <stdio.h>
#include <stdlib.h>

double calculateOperation(double (*operation)(double, double), double number1 ,double number2)
{
    return operation(number1,number2);
}

double pom(double arg1, double arg2)
{
    return arg1 * arg2;
}

int main()
{
    printf("%f", calculateOperation(pom, 1.2, 3.4));
    return 0;
}
