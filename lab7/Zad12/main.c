#include <stdio.h>
#include <stdlib.h>
int isNotDigit(char znak)
{
    if(znak >= 48 && znak <= 57){
        return 0;
    }
    return 1;
}


void rmDigits(char napis[]){
    int n = 0, m = 0;

    while (napis[n] != '\0'){
        if(isNotDigit(napis[n])){
            napis[m]= napis[n];
            m++;
        }
        n++;
    }
    napis[m] = '\0';
}
int main()
{
    char napis[] = "C12345iast6O";
    rmDigits(napis);
    printf("%s\n", napis);

    return 0;
}
