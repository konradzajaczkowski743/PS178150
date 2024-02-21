#include <stdio.h>
#include <stdlib.h>

int main()
{
    char zmienna1,zmienna2;
    printf("Wprowadz dwie litery: ");
    scanf("%c %c",&zmienna1,&zmienna2);
    printf("Na odwrot: %c %c",zmienna2,zmienna1);
    return 0;
}
