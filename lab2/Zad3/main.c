#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj ocene: ");
    scanf("%d", &a);
    switch(a) {
    case 1: printf("Ocena niedostateczna");
        break;
    case 2: printf("Ocena dopuszczaj¹ca");
        break;
    case 3: printf("Ocena dostateczna");
        break;
    case 4: printf("Ocena dobra");
        break;
    case 5: printf("Ocena bardzo dobra");
        break;
    default: printf("Blad. Ocena poza skala");
        break;
    }
    return 0;
}
