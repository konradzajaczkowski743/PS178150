#include <stdio.h>
#include <stdlib.h>
void swap(int* w1, int* w2)
{
    int temp = *w1;
    *w1 = *w2;
    *w2 = temp;
}
int main()
{
    int a = 10 , b = 15;
    swap(&a,&b);
    printf("%d %d", a ,b);
    return 0;
}
