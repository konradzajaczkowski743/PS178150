#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Fibo=1,a=9,n=0,m=1;
    printf("%d\n", Fibo);
    while(a>0)
    {
        Fibo = m + n;
        n=m;
        m=Fibo;
        printf("%d\n", Fibo);
        a--;
    }
    return 0;
}
