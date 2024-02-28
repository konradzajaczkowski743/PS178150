#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz rok: ");
    scanf("%d", &a);
    if(a%4==0 && (a%100!=0 || a%400==0))
        printf("Rok %d jest przytepny",a);
    else
        printf("Rok %d nie jest przytepny",a);

}

