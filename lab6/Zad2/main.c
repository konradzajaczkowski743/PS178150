#include <stdio.h>
#include <stdlib.h>

float average(int n, int tab[])
{
    float suma = 0;
    for (int i = 0;i<n;i++)
    {
        suma = suma + tab[i];
    }
    return suma/n;
}

int main()
{
    int tablica[4] = {1,3,5,7};
    printf("%f", average(4, tablica));
}
