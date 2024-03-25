#include <stdio.h>
#include <stdlib.h>

int minIndMax(int n, int tab[])
{
    int maxInd = 0, maxNum = tab[0];

    for(int i=1; i<n; i++){
        if(maxNum <= tab[i]){
            maxNum = tab[i];
            maxInd = i;
        }
    }
    return maxInd;
}


int main()
{
    int tablica[] = {1,2,3,5,3,4,2,5,1};
    printf("%d", minIndMax(9, tablica));

    return 0;
}
