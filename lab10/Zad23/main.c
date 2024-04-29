#include <stdio.h>
#include <stdlib.h>

int** transCopy(int n, int **tab)
{
    int **wsk = malloc(n * sizeof(int*));
    for(int i=0;i<n;i++)
    {
        wsk[i] = malloc(n * sizeof(int));
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            wsk[j][i] = tab[i][j];
        }
    }
    return wsk;
}
int main()
{
    int **tab = malloc(3*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));


    tab[0][0] =  2;
    tab[0][1] =  3;
    tab[0][2] = -8;
    tab[1][0] =  1;
    tab[1][1] = -4;
    tab[1][2] =  7;
    tab[2][0] =  0;
    tab[2][1] = -5;
    tab[2][2] = -9;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int** wynik = transCopy(3, tab);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", wynik[i][j]);
        }
        printf("\n");
    }


    return 0;
}
