#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    printf("Jaki jest twoj rok urodzenia?\n");
    scanf("%d" ,&rok);
    printf("Rok o 1 mniejszy od twojego roku urodzenia to: %d\n", rok-1);
    return 0;
}
