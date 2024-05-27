#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element* createNoHead()
{
    struct element * wskaznik = malloc(sizeof(struct element));
    return wskaznik;
};


int main()
{
    createNoHead();
    return 0;
}
