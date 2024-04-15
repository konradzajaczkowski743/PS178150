#include <stdio.h>
#include <stdlib.h>

int sumPositiveNumbers(int n, int tab[])
{
    int suma=0;

    for(int i=0; i<n; i++){
        if(tab[i] > 0){
            suma = suma + tab[i];
        }
    }
    return suma;
}


int main()
{
    int tablica1[] = {1,2,-3,5,-3,-4,2,5,-1};
    printf("%d\n", sumPositiveNumbers(9, tablica1));
    int tablica2[] = {-1,-2,-3};
    printf("%d", sumPositiveNumbers(3, tablica2));
    return 0;
}
