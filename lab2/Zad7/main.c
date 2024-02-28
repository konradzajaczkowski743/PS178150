#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("Wprowadz trzy liczby: ");
    scanf("%f %f %f", &a ,&b, &c);
    float delta = b*b - 4*a*c;

    if(delta>0){
        printf("Pierwiastki rownania to: %f i %f", ( ( (-1)*b - sqrt(delta) ) / (2*a) ), (((-1)*b+sqrt(delta))/(2*a)));
    }
    else{
        if (delta==0){
            printf("Pierwiastek rownania to: %f", (((-1)*b )/(2*a)) );
        }
        else{
            printf("Rownanie nie ma pierwiastkow");
        }
    }
}
