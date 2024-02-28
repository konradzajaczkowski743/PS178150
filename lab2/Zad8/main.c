#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Wprowadz dwie liczby: ");
    scanf("%d %d", &a ,&b);
    int max = (a<b)? b:a;
    printf("Wieksza liczba: %d",max);
}
