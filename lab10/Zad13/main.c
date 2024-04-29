#include <stdio.h>
#include <stdlib.h>

void transpose(int n, int tab[n][n])
{
    int temptab[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temptab[i][j] = tab[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            tab[j][i] =  temptab[i][j];
        }
    }
}
int main()
{
    int tab1[2][2] = {{1,2},{3,4}};
    int tab2[3][3] = {{5,6,7},{8,9,0},{1,2,3}};

    transpose(2, tab1);

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ", tab1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    transpose(3, tab2);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", tab2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
