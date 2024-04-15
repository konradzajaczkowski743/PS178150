#include <stdio.h>
#include <stdlib.h>

char strNcopy(char nap1[] ,char nap2[], int n){
    int i = 0;
    while (nap1[i] != '\0' && n!=i){
        nap2[i] = nap1[i];
        i++;
    }
    while(nap2[i] != '\0'){
        i++;
    }
    nap2[i] = '\0';
}
int main()
{
    char nap1[] = "mleko", nap2[] = "drogowskaz";
    strNcopy(nap1, nap2, 5);
    printf("%s\n", nap2);
    return 0;
}
