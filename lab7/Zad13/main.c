#include <stdio.h>
#include <stdlib.h>

void cutStr(char napis[], int n, int m){
    int i = 0, j = 0;

    while (napis[i] != '\0'){
        if(i < n || i > m){
            napis[j]= napis[i];
            j++;
        }
        i++;
    }
    napis[j] = '\0';
}
int main()
{
    char napis[] = "Olsztyn12345";
    cutStr(napis,1,4);
    printf("%s\n", napis);

    cutStr(napis,-1,26);
    printf("%s\n", napis);

    char napis2[] = "Piekarnia";
    cutStr(napis2,2,16);
    printf("%s\n", napis2);

    char napis3[] = "DomDlaLalek";
    cutStr(napis3,-2,7);
    printf("%s\n", napis3);

    char napis4[] = "Tygrys";
    cutStr(napis4,-3, -2);
    printf("%s\n", napis4);

    cutStr(napis4, 0, 0);
    printf("%s\n", napis4);

    return 0;
}
