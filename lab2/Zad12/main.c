#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz ocene w skali 0-100: ");
    scanf("%d",&a);
    int p = (a>=51) ? 1:0;
    if(p) printf("zdane");
    else
        printf("niezdane");
}
