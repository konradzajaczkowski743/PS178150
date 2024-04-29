#include <stdio.h>
#include <stdlib.h>

void showRows(int n, int m, int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j!= m-1)
            {
                printf("%d,",  tab[i][j]);
            }
            else
            {
                printf("%d",  tab[i][j]);
            }
        }
        printf("\n");
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
    tab[2][2] =  9;
    tab[3][0] = -2;
    tab[3][1] =  4;
    tab[3][2] =  6;

    showRows(4, 3, tab);


    return 0;
}
