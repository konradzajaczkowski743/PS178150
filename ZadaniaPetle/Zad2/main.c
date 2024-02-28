#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz liczbe: ");
    scanf("%d", &a);
    int suma=0;
    while(a>0)
    {
       suma = suma + a;
       a--;
    }
    printf("Suma = %d", suma);
    return 0;
}
