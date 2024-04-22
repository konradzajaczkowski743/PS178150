#include <stdio.h>
#include <stdlib.h>

int countVow(char napis[]){
    int n = 0, wynik = 0;
    char samogloski[] = "aeiouyAEIOUY";
    while (napis[n] != '\0'){
        for(int i=0;i<12;i++){
            if(napis[n] == samogloski[i]){
                wynik++;
            }
        }
        n++;
    }
    return wynik;
}
int main()
{
    printf("%d\n", countVow("ciasto"));
    printf("%d", countVow("sdfgh"));
    return 0;
}
