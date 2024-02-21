#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z1,z2,z3;
    printf("Wprowadz trzy liczby calkowite: ");
    scanf("%d %d %d",&z1,&z2,&z3);
    float suma = z1+z2+z3;
    float wynik = suma/3;
    printf("Srednia arytmetyczna tych liczb: %f", wynik);
    return 0;
}
