#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Wprowadz trzy rozne liczby: ");
    scanf("%d %d %d", &a ,&b, &c);
    if(a>c && b>c)
        printf("Najmniejsza jest: %d", c);
    else
        if (a<b && a<c)
            printf("Najmniejsza jest: %d", a);
    else
        printf("Najmniejsza jest: %d", b);
}
