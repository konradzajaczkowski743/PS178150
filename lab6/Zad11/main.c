#include <stdio.h>
#include <stdlib.h>
void shiftLeft(int n, float tab[])
{
    float temp = tab[0];
    for(int i=0; i<n-1; i++){
        tab[i]=tab[i+1];
    }
    tab[n-1] = temp;
}

int main()
{
    float tablica[] = {1.1, 2.0, 3.3, 4.0, 5};
    shiftLeft(5,tablica);

    for(int i=0; i<5; i++)
    {
        printf("%f ", tablica[i]);
    }

    return 0;
}
