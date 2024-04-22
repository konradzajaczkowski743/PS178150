#include <stdio.h>
#include <stdlib.h>

int length(char napis[]){
    int i = 0;
    while (napis[i] != '\0'){
        i++;
    }
    return i;
}

char * copyEveryThird(char *napis){
    int j = 0, n = length(napis);

    char * wynik = malloc(sizeof(char)*(n+1));

    for(int i=0; i<n; i+=3) {
        wynik[j] = napis[i];
        j++;
    }

    wynik[j] = '\0';

    return wynik;
}

int main()
{
    char napis[] = "ABCACB";
    char * wynik = copyEveryThird(napis);
    printf("%s", wynik);

    return 0;
}
