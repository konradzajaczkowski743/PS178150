#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element * next;
};

int find(struct element* lista, int a)
{
    while(lista->next!=NULL)
    {
        if(lista->i == a)
        {
            return 1;
        }
        lista = lista->next;
    }
    return 0;
}
int main()
{
    struct element* lista = malloc(sizeof(struct element));
    lista->i = 3;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 10;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -12;
    lista->next->next->next = NULL;

    printf("%d\n", find(lista,10));
    printf("%d", find(lista,11));

    return 0;
}
