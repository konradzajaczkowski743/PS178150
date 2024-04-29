#include <stdio.h>
#include <stdlib.h>
void sortowanie(int n,int tab[])
{
    int temp = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(tab[j-1]>tab[j])
            {
                temp = tab[j];
                tab[j] = tab[j-1];
                tab[j-1] = temp;
            }
        }
    }
}

void sortRows(int n, int m, int **tab)
{

    for(int l=0;l<n;l++)
    {
        int temp = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=1;j<m-i;j++)
            {
                if(tab[l][j-1]>tab[l][j])
                {
                    temp = tab[l][j];
                    tab[l][j] = tab[l][j-1];
                    tab[l][j-1] = temp;
                }
            }
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

    sortRows(4, 3, tab);
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
