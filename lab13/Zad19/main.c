#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element * next;
};

void removeFirst (struct element* lista)
{
    lista->i = lista->next->i;
    lista->next = lista->next->next;
}

void printListWithoutHead(struct element* lista)
{
    if (lista == NULL){
        printf("Pusta Lista\n");
        printf("---\n");
        return;
    }
    while(lista != NULL){
        printf("%d\n", lista->i);
        lista = lista->next;
    }
    printf("---\n");
}

int main()
{
    struct element* lista = malloc(sizeof(struct element));
    lista->i = -9;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 12;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -30;
    lista->next->next->next = NULL;

    printListWithoutHead(lista);

    removeFirst(lista);

    printListWithoutHead(lista);

    return 0;
}
