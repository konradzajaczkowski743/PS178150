#include <stdio.h>
#include <stdlib.h>

int isOdd(char znak){
    char odds[] = "13579";
    for(int i=0;i<5;i++){
        if(znak == odds[i]){
            return 1;
        }
    }
    return 0;
}


int countOdds(char napis[]){
    int i = 0, wynik = 0;

    while (napis[i] != '\0'){
        if(isOdd(napis[i])){
            wynik++;
        }
        i++;
    }
    return wynik;
}
int main()
{
    char liczby[] = "123467890";
    char napis[] = "Ala ma 3 koty";
    char litery[] = "ABCD";
    printf("%d\n", countOdds(liczby));
    printf("%d\n", countOdds(napis));
    printf("%d", countOdds(litery));

    return 0;
}
