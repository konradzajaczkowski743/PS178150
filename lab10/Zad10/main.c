#include <stdio.h>
#include <stdlib.h>

void revRowArr(int n, int m, int **tab)
{
    int temptab[n][m], k = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            temptab[i][j] = tab[i][k];
            k++;
        }
        k = 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab[i][j] = temptab[i][j];
        }
    }
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

    revRowArr(2,3,tab);

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
