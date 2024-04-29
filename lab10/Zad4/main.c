#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n, int m, int **tab)
{
    int min = tab[0][0], minj = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(tab[i][j] < min)
            {
                min = tab[i][j];
                minj = j;
            }
        }
    }
    return minj;
}

int main()
{
    int **tab = malloc(2*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));

    tab[0][0] =  2;
    tab[0][1] =  3;
    tab[0][2] = -8;
    tab[1][0] =  1;
    tab[1][1] = -4;
    tab[1][2] =  7;

    printf("%d", minColIdx(2,3,tab));
    return 0;
}
