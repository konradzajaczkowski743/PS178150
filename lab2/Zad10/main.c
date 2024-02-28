#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz liczbe: ");
    scanf("%d", &a);
    int p = (a%2==0)? 1:0;
    if(p)
        printf("Liczba jest parzysta");
    else
        printf("Liczba jest nieparzysta");

}
