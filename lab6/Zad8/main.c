#include <stdio.h>
#include <stdlib.h>
int minValue(int n,int tab[])
{
    int min = tab[0];
    for(int i=1; i<n; i++)
    {
        if(min > tab[i])
        {
            min = tab[i];
        }
    }

    return min;
}

int main()
{
    int tablica[] = {2,3,6,7,10,11,-21};
    printf("%d", minValue(7,tablica));
    return 0;
}
