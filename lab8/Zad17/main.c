#include <stdio.h>
#include <stdlib.h>

void rmOdd(char napis[]){
    int i = 0, j = 0;

    while (napis[i] != '\0'){
        if(i%2 == 0){
            napis[j] = napis[i];
            j++;
        }
        i++;
    }
    napis[j] = '\0';
}
int main()
{
    char napis[] = "aBrAbNuAzN";
    rmOdd(napis);
    printf("%s", napis);

    return 0;
}
