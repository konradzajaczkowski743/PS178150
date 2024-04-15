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
    cutStr(napis,1,6);
    printf("%s\n", napis);

    return 0;
}
