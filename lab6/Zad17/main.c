#include <stdio.h>
#include <stdlib.h>
int findElement(int *tab, int n, int val, int (*isEqual)(int,int))
{
    for(int i=0; i<n; i++)
    {
        if(isEqual(val, *(tab+i)))
        {
            return i;
        }
    }
    return -1;
}

int isEqual(int x, int y)
{
    if(x == y){
        return 1;
    }
    return 0;
}

int main()
{
    int * tablica = malloc(5*sizeof(int));

    *tablica = 4;
    *(tablica + 1) = 2;
    *(tablica + 2) = 3;
    *(tablica + 3) = 5;
    *(tablica + 4) = -1;

    printf("%d\n", findElement(tablica,5,10,isEqual));
    printf("%d", findElement(tablica,5,5,isEqual));

    return 0;
}
