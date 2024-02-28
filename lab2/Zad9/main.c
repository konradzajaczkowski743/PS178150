#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Wprowadz trzy liczby: ");
    scanf("%d %d %d", &a ,&b, &c);
    int min = (a<b) ? (a<c ? a:c) : (b<c ? b:c);
    printf("Najmniejsza liczba: %d",min);
}
