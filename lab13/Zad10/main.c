#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element * next;
};

void addFirst (struct element* lista, int a)
{
    struct element * wsk = malloc(sizeof(struct element));
    wsk -> i = a;
    wsk->next = lista->next;
    lista -> next = wsk;
}

void printListWithHead (struct element* lista)
{
    if(lista->next == NULL)
    {
        printf("Lista jest pusta");
        printf("---\n");
        return;
    }
    while(lista->next != NULL)
    {
        lista = lista->next;
        printf("%d\n", lista->i);
    }

}

int main()
{
    struct element* lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = -9;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 12;
    lista->next->next->next = NULL;

    printListWithHead(lista);

    addFirst(lista,10);

    printListWithHead(lista);

    return 0;
}
