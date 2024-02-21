#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kwota;
    printf("Wprowadz kwote dolarow: ");
    scanf("%f",&kwota);
    printf("podana kwota w euro = %f",0.85*kwota);
    return 0;
}
