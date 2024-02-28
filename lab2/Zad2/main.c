#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Wprowadz dwie liczby: ");
    scanf("%d %d", &a ,&b);
    if(a>b)
        printf("Wieksza jest: %d", a);
    else
        if (a<b)
            printf("Wieksza jest: %d", b);
    else
        printf("Liczby sa rowne");
}
