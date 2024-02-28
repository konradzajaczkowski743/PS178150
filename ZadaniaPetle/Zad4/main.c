#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Wprowadz liczbe: ");
    scanf("%d", &a);
    int silnia=1;
    for(int i=1;i<=a;i++)
    {
        silnia=silnia*i;
    }
    printf("%d! = %d", a ,silnia);
    return 0;
}
