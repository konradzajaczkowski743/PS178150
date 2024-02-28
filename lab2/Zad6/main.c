#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Wprowadz dwie liczby: ");
    scanf("%d %d", &a ,&b);
    if((a+b)%2==0)
        printf("suma liczb jest parzysta");
    else
        printf("suma liczb nie jest parzysta");

}
