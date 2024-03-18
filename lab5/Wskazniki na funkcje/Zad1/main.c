#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int), int number)
{
    return operation(number);
}

int pom(int arg)
{
    return arg - 2;
}

int main()
{
    printf("%d", calculate(pom, 5));
    return 0;
}
