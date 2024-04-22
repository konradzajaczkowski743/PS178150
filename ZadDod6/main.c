#include <stdio.h>
#include <stdlib.h>

int funkcjaMale(char napis[]){
    int n = 0, wynik = 0;

    while (napis[n] != '\0')
    {
        if(97 <=napis[n] && napis[n] <= 122)
        {
                wynik++;
        }
        n++;
    }
    return wynik;
}

int main()
{
    printf("%d\n", funkcjaMale("CiAsto"));
    printf("%d", funkcjaMale("SSSabcdeHHHKHgH"));
    return 0;
}


