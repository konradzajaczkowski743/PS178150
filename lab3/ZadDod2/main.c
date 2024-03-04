#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Wprowadz liczbe: ");
    scanf("%d", &n);
    for (int i =-n;i<=n;i++)
    {
        if(i%4==0){
            printf("%d ",i);
        }
    }
    return 0;
}
