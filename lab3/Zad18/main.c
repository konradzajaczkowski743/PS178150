#include <stdio.h>
#include <stdlib.h>

int calculateGCD(int n, int m)
{
  if(m==0){
    return n;
  }
  else{
    return calculateGCD(m, n%m);
  }
}
int main()
{
    printf("%d\n", calculateGCD(24, 60));
    printf("%d\n", calculateGCD(26, 65));
    printf("%d", calculateGCD(108, 36));
    return 0;
}
