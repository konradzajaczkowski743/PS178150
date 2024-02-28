#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,a3,k;
    printf("Wprowadz 10 liczb:\n");
    scanf("%d", &a1);
    scanf("%d", &a2);
    for(int i=0;i<8;i++)
        {
            scanf("%d", &a3);
            if(a2<(a1+a3)/2.0) k++;
            a1 = a2;
            a2 = a3;
        }
        printf("Ilosc liczb spelniajacych warunek: %d", k);
    return 0;
}
