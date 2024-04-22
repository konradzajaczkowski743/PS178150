#include <stdio.h>
#include <stdlib.h>

int indexLower(char napis[]){
    int n = 0;

    while (napis[n] != '\0'){
        if(97 <=napis[n] && napis[n] <= 122){
            return n;
        }
        n++;
    }
    return 0;
}
int main()
{
    char napis1[] = "aBANAN";
    char napis2[] = "123aBC";
    char napis3[] = "AAccccc";
    char pusty[] = "";
    char duze[] = "ABC";
    printf("%d\n", indexLower(napis1));
    printf("%d\n", indexLower(napis2));
    printf("%d\n", indexLower(napis3));
    printf("%d\n", indexLower(pusty));
    printf("%d", indexLower(duze));

    return 0;
}
