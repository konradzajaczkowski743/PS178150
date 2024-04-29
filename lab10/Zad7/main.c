#include <stdio.h>
#include <stdlib.h>

void swapElems(int n, int m, int tab1[n][m], int tab2[n][m])
{
    int temptab[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temptab[i][j] = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temptab[i][j];
        }
    }
}
int main()
{
    int tab1[2][2] = {{1,2},{3,4}};
    int tab2[2][2] = {{5,6},{7,8}};

    swapElems(2, 2, tab1, tab2);

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ", tab1[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ", tab2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
