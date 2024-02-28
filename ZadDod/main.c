#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Wprowadz trzy liczby: ");
    scanf("%f %f %f", &a ,&b, &c);
    float licznik = b- 2*c;
    float mianownik = 4 + a;
    float wynik = licznik/mianownik;
    printf("Wynik = %f", wynik);
}
