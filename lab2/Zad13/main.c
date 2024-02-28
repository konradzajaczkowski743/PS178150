#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz rok: ");
    scanf("%d",&a);
    int p = (a%4==0) ? (a%100==0 ? (a%400==0 ? 1:0):1):0 ;
    if(p)
        printf("Rok przystepny");
    else
        printf("Rok nieprzystepny");
}
