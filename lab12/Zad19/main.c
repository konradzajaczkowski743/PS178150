#include <stdio.h>
#include <stdlib.h>

union Number {
    int calkowita;
    float wymierna;
};

struct Liczba{
    int warunek;
    union Number num;
};

struct Liczba wczytaj()
{
    struct Liczba temp;
    printf("Dla liczby calkowitej wpisz 0, a dla wymiernej wpisz 1\n");
    scanf("%d", &temp.warunek);
    if (temp.warunek == 0)
    {
        scanf("%d", &temp.num.calkowita);
    }
    else
    {
        scanf("%f", &temp.num.wymierna);
    }
    return temp;
};

void wyswietl(struct Liczba arg)
{
    if (arg.warunek == 0)
    {
        printf("%d\n", arg.num.calkowita);
    }
    else
    {
        printf("%f\n", arg.num.wymierna);
    }
}

int main()
{
    struct Liczba zmienna;
    zmienna = wczytaj();
    wyswietl(zmienna);
    return 0;
}
