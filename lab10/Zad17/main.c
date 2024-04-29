#include <stdio.h>
#include <stdlib.h>

void swap2nd(int n, int m, int **tab)
{
    if(n>=4)
    {
        int temptab[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                temptab[i][j] = tab[i][j];
            }
        }

        for(int i=0;i<m;i++)
        {
            tab[1][i] =  temptab[n-2][i];
            tab[n-2][i] =  temptab[1][i];
        }
    }
}
int main()
{
    int **tab = malloc(4*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[3] = malloc(3*sizeof(int));

    tab[0][0] =  2;
    tab[0][1] =  3;
    tab[0][2] = -8;
    tab[1][0] =  1;
    tab[1][1] = -4;
    tab[1][2] =  7;
    tab[2][0] =  0;
    tab[2][1] = -5;
    tab[2][2] = -9;
    tab[3][0] =  2;
    tab[3][1] =  4;
    tab[3][2] =  6;



    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    swap2nd(4, 3, tab);
    printf("\n");

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
