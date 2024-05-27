#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void printListWithHead (struct element* lista)
{
    if(lista->next == NULL)
    {
        printf("Lista jest pusta\n");
        printf("---\n");
        return;
    }
    while(lista->next != NULL)
    {
        lista = lista->next;
        printf("%d\n", lista->i);

    }
    printf("---\n");
}


int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 4;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 6;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -12;
    lista->next->next->next->next = NULL;

    printListWithHead(lista);

    struct element * lista2 = NULL;

    printListWithHead(lista2);

    return 0;
}
