#include <stdio.h>
#include <stdlib.h>
int funkcja(int a, int b)
{
    if(a%10 != b%10)
        return 1;
    return 0;
}
int main()
{
    printf("%d\n", funkcja(12,2));
    printf("%d\n", funkcja(14,2));
    printf("%d\n", funkcja(10324,1564));
    printf("%d\n", funkcja(1,11111111));
    printf("%d\n", funkcja(0,10000));
    printf("%d", funkcja(1234617,124234));
    return 0;
}
