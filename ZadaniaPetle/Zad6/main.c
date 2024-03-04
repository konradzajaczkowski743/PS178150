#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,k=0;
    printf("Wprowadz liczbe: ");
    scanf("%d", &a);
    while(a>=(k+1)*(k+1)){
        k++;
    }
    printf("Podloga pierwiastka z liczby = %d ", k);
    return 0;
}
