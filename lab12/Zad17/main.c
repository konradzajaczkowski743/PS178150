#include <stdio.h>
#include <stdlib.h>

enum Miesiace {styczen, luty, marzec, kwiecien, maj, czerwiec, lipiec, sierpien, wrzesien, pazdziernik, listopad , grudzien};

int days_in_month(enum Miesiace m)
{
    if(m == 1)
        return 28;
    if(m<=6 && m%2!=0)
        return 30;
    if(m>=7 && m%2==0)
        return 30;
    return 31;
}

int main()
{
    printf("%d\n",days_in_month(luty));
    printf("%d\n",days_in_month(grudzien));
    printf("%d\n",days_in_month(kwiecien));
    printf("%d\n",days_in_month(lipiec));
    printf("%d\n",days_in_month(sierpien));
    printf("%d\n",days_in_month(styczen));
    return 0;
}
