#include <stdio.h>
#include <stdlib.h>

int applyCondition(int (*condition)(int), int (*action)(int), int value)
{
    if(condition(value))
    {
        return action(value);
    }
    return value;
}

int warunek(int numer)
{
    return numer>10;
}

int akcja(int numer)
{
    return numer*2;
}


int main()
{
    printf("%d\n", applyCondition(warunek, akcja, 12));
    printf("%d", applyCondition(warunek, akcja, 2));
    return 0;
}
