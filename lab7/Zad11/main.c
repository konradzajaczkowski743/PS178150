#include <stdio.h>
#include <stdlib.h>

void rmLower(char napis[]){
    int n = 0, m = 0;

    while (napis[n] != '\0'){
        if(napis[n] < 97){
            napis[m]= napis[n];
            m++;
        }
        n++;
    }
    napis[m] = '\0';
}
int main()
{
    char napis[] = "CiastO";
    rmLower(napis);
    printf("%s\n", napis);

    return 0;
}
