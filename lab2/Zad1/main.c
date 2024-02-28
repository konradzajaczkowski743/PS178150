#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz liczbe calkowita: ");
    scanf("%d", &a);
    if(a>0){
        printf("Liczba jest wieksza od zera");
        }
    else{
        if(a<0){
            printf("Liczba jest mniejsza od zera");
        }
        else{
            printf("Liczba jest rowna zero");
        }
    }

    return 0;
}
