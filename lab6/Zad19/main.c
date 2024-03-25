#include <stdio.h>
#include <stdlib.h>
int symetryczna(int n, int tab[]){

    for(int i=0; i<n/2; i++)
    {
        if(tab[i] != tab[n-1-i]){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int tab1[] = {1,2,3,4,5};
    int tab2[] = {1,2,3,2,1};
    printf("%d\n", symetryczna(5,tab1));
    printf("%d", symetryczna(5,tab2));
    return 0;
}
