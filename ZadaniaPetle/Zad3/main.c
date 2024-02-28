#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sumaP=0,sumaN=0;
    do
    {
    printf("Wprowadz liczbe: ");
    scanf("%d", &a);
    if(a>0){
        sumaP = sumaP + a;
    }
    else{
        sumaN = sumaN + a;
    }
    }while(a);

     printf("Suma pozytywnych = %d\n", sumaP);
     printf("Suma negatywnych = %d\n", sumaN);
    return 0;
}
