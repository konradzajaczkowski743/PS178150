#include <stdio.h>
#include <stdlib.h>

int calculateFactorialRecursively(int n)
{
    if(n==0){
        return 1;
    }
    return n*calculateFactorialRecursively(n-1);
}
int main()
{
    printf("%d\n", calculateFactorialRecursively(7));
    printf("%d\n", calculateFactorialRecursively(2));
    printf("%d\n", calculateFactorialRecursively(1));
    printf("%d\n", calculateFactorialRecursively(0));
    printf("%d", calculateFactorialRecursively(5));
    return 0;
}
