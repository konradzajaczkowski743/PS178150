#include <stdio.h>
#include <stdlib.h>

int sumMatrix(int n, int m, int tab[n][m])
{
    int suma = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            suma = suma + tab[i][j];
        }
    }
    return suma;
}
int main()
{
    int tab[2][3] = {{1,2,4},{-2,3,5}};

    printf("%d", sumMatrix(2,3,tab));
    return 0;
}
