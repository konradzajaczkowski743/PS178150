#include <stdio.h>
#include <stdlib.h>

int calculateGeometricSequenceRecursively(int n, int d)
{
    if(n==1){
        return 1;
    }
    else{
        return d*calculateGeometricSequenceRecursively(n-1,d);
    }
}
int main()
{
    printf("%d\n", calculateGeometricSequenceRecursively(5,2));
    printf("%d\n", calculateGeometricSequenceRecursively(1,3));
    printf("%d", calculateGeometricSequenceRecursively(3,10));
    return 0;
}
