#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("Wprowadz liczbe: ");
    scanf("%f %f", &a,&b);
    float max = (a<b)? b:a;
    if(a==b) printf("liczby sa rowne");
    printf("Wieksza liczba: %.2f",max);
}
