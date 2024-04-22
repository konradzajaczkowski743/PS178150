#include <stdio.h>
#include <stdlib.h>
int length(char napis[]){
    int i = 0;
    while (napis[i] != '\0'){
        i++;
    }
    return i;
}
int main()
{
    printf("%d", length("ciasto"));
    return 0;
}
