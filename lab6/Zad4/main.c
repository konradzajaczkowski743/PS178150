#include <stdio.h>
#include <stdlib.h>
void copyArr(int n, int tab1[], int tab2[])
{
    for(int i=0; i<n; i++)
    {
        tab2[i] = tab1[i];
    }
}



int main()
{
    int tablica1[] = {1,2,3,4,5}, tablica2[] = {0,1,1,0,1};
    copyArr(5,tablica1,tablica2);

    for(int i=0; i<5; i++)
    {
        printf("%d ", tablica2[i]);
    }
    return 0;
}
