#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a+b;
}

int sumVal(int *wskaznik1, int *wskaznik2)
{
    return *wskaznik1 + *wskaznik2;
}

void addPtr(int *wsk1, int *wsk2, int *suma)
{
    *suma = *wsk1 + *wsk2;
}


int main()
{
    printf("%d\n", sum(2,5));

    int a=5,b=4;
    printf("%d\n", sumVal(&a,&b));

    int n=-1,m=12,suma;
    addPtr(&n,&m,&suma);
    printf("%d", suma);
    return 0;
}
