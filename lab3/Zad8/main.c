#include <stdio.h>
#include <stdlib.h>

void countFunctionCalls()
{
    static int x;
    x++;
    printf("%d\n", x);
}
int main()
{
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    return 0;
}

