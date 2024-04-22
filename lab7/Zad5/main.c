#include <stdio.h>
#include <stdlib.h>

int lexComp(char napis1[] ,char napis2[]){
    int n = 0;

    while (napis1[n] != '\0' && napis2[n] != '\0'){

        if(napis1[n]>napis2[n]){
            return 1;
        }
        if(napis1[n]<napis2[n]){
            return 0;
        }
        n++;
    }

    if (napis1[n] == '\0' && napis2[n] != '\0') {
        return 0;
    }
    if (napis1[n] != '\0' && napis2[n] == '\0') {
        return 1;
    }

    return 0;
}
int main()
{
    printf("%d\n", lexComp("ciasto","Droga"));
    printf("%d\n", lexComp("Sdfgh","abcde"));
    printf("%d", lexComp("aaaaa","aaa"));
    return 0;
}
