#include <stdio.h>
#include <stdlib.h>

float calculatePowerOfTwo(int n)
{
    int wynik=1,p;
    if(n<0){
        p=-1*n;
    }
    else{
        p=n;
    }


    for(int i=0;i<p;i++)
    {
        wynik=wynik*2;
    }

    if(n<0){
        return 1.0/wynik;
    }
    else{
        return wynik;
    }
}
int main()
{
    printf("%f\n", calculatePowerOfTwo(10));
    printf("%f\n", calculatePowerOfTwo(-5));
    printf("%f", calculatePowerOfTwo(0));
    return 0;
}
