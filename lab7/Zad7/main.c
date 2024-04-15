#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char napis[]){
    int n = 0;

    while (napis[n] != '\0'){
        if(napis[n] >= 97){
            napis[n]= napis[n] - 32;
        }
        n++;
    }
}
int main()
{
    char napis[] = "Ciasto";
    toUpperNew(napis);
    printf("%s\n", napis);

    return 0;
}
