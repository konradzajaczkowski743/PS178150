#include <stdio.h>
#include <stdlib.h>

void snkPrint(int n, int m, int **tab)
{
    int poczatekW = 0;
    int granicaW = n-1;
    int poczatekK = 0;
    int granicaK = m-1;

    while(poczatekW <= granicaW && poczatekK <= granicaK)
    {
        for(int i=poczatekK; i<=granicaK; i++)
        {
            printf("%d ",tab[poczatekW][i]);
        }
        poczatekW++;

        for(int j=poczatekW; j<=granicaW; j++)
        {
            printf("%d ",tab[j][granicaK]);
        }
        granicaK--;

        for(int i=granicaK; i>=poczatekK; i--)
        {
            printf("%d ",tab[granicaW][i]);
        }
        granicaW--;

        for(int j=granicaW; j>=poczatekW; j--)
        {
            printf("%d ",tab[j][poczatekK]);
        }
        poczatekK++;
    }
}

void printTable(int ** tab, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int **tab = malloc(4*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[3] = malloc(3*sizeof(int));

    tab[0][0] =  2; tab[0][1] =  3; tab[0][2] = -8;
    tab[1][0] =  1; tab[1][1] = -4; tab[1][2] =  7;
    tab[2][0] =  0; tab[2][1] = -5; tab[2][2] =  9;
    tab[3][0] = -2; tab[3][1] =  4; tab[3][2] =  6;

    printTable(tab, 4, 3);
    snkPrint(4, 3, tab);
    printf("\n\n");

    int **tab2 = malloc(5*sizeof(int*));
    tab2[0] = malloc(4*sizeof(int));
    tab2[1] = malloc(4*sizeof(int));
    tab2[2] = malloc(4*sizeof(int));
    tab2[3] = malloc(4*sizeof(int));
    tab2[4] = malloc(4*sizeof(int));

    tab2[0][0] =  1; tab2[0][1] =  2; tab2[0][2] =  3; tab2[0][3] =  4;
    tab2[1][0] =  5; tab2[1][1] =  6; tab2[1][2] =  7; tab2[1][3] =  8;
    tab2[2][0] =  9; tab2[2][1] =  0; tab2[2][2] = -1; tab2[2][3] = -2;
    tab2[3][0] = -3; tab2[3][1] = -4; tab2[3][2] = -5; tab2[3][3] = -6;
    tab2[4][0] = -7; tab2[4][1] = -8; tab2[4][2] = -9; tab2[4][3] =  0;

    printTable(tab2, 5, 4);
    snkPrint(5, 4, tab2);
    printf("\n");


    return 0;
}
