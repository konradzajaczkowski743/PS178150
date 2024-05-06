#include <stdio.h>
#include <stdlib.h>

int sumaParz(int n, int m, int **tab)
{
    int suma = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j=j+2)
        {
            suma = suma + tab[i][j];
        }
    }

    return suma;
}

int main()
{
    int **tab = malloc(4*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[3] = malloc(3*sizeof(int));

    tab[0][0] = -2; tab[0][1] =  3; tab[0][2] =  1;

    tab[1][0] =  8; tab[1][1] =  4; tab[1][2] =  0;

    tab[2][0] =  4; tab[2][1] =  5; tab[2][2] = -6;

    tab[3][0] = -2; tab[3][1] =  4; tab[3][2] =  6;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }


    printf("\n%d", sumaParz(4, 3, tab));



    return 0;
}
