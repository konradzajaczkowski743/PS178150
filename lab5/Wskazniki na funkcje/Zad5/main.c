#include <stdio.h>
#include <stdlib.h>

int modifyAndSum(int (*modifier)(int), int number1 ,int number2)
{
    return modifier(number1) + modifier(number2);
}

int pom(int numer)
{
    return numer + 1;
}

int main()
{
    printf("%d", modifyAndSum(pom, 5, 10));
    return 0;
}
