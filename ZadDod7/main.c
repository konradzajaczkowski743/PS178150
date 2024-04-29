#include <stdio.h>
#include <stdlib.h>

void funkcjaZadDod(char n1[], char n2[]){

    int n = 0, i = 0;
    while (n1[n] != '\0' && n<2){
        n2[n] = n1[n];
        n++;
    }
    while(n2[i] != '\0'){
        i++;
    }
    n2[i] = '\0';

}

int main()
{
    char napis1[] = "ABCACB";
    char napis2[] = "Kot";

    funkcjaZadDod(napis1, napis2);
    printf("%s\n", napis2);

    char napispusty[] = "";
    char napis3[] = "Drzewo";

    funkcjaZadDod(napispusty, napis3);
    printf("%s\n", napis3);

    char napisjeden[] = "O";
    char napis4[] = "TKNO";

    funkcjaZadDod(napisjeden, napis4);
    printf("%s\n", napis4);

    char napisdwa[] = "OK";
    char napis5[] = "Kaczka";

    funkcjaZadDod(napisdwa, napis5);
    printf("%s", napis5);


    return 0;
}
