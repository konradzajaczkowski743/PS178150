#include <stdio.h>
#include <stdlib.h>
void sqrCopy(int * const wsk1, int *wsk2)
{
    *wsk2 = (*wsk1) * (*wsk1);
}

int main()
{
    int x = 10,w;
    sqrCopy(&x, &w);
    printf("%d",w);

    return 0;
}
