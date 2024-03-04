#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,k=0;
    printf("Wprowadz liczbe: ");
    scanf("%d", &a);
    while(a>k*k){
        k++;
    }
    printf("Sufit pierwiastka z liczby = %d ", k);
    return 0;
}
