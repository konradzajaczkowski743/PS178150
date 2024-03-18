#include <stdio.h>
#include <stdlib.h>

int Funkcja3(int (*func1)(int), int (*func2)(int), int n)
{
    for(int i = 0; i <= n; i++)
    {
        if(func1(i)*func2(i) < 0)
        {
           return 0;
        }
    }
    return 1;
}

int pom1(int numer)
{
    return numer*2;
}

int pom2(int numer)
{
    return numer + 1;
}

int pom3(int numer)
{
    return numer - 10;
}

int main()
{
    printf("%d\n", Funkcja3(pom1, pom2, 12));
    printf("%d", Funkcja3(pom2, pom3, 14));
    return 0;
}
