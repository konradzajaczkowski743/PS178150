#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start ,int end)
{
    for(int i = start; i <= end; i++)
    {
        printf("%d\n", func(i));
    }
}

int pom(int numer)
{
    return numer*numer;
}

int main()
{
    applyFunction(pom, 2, 12);
    return 0;
}
