#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element * next;
};

int sumUj(struct element* lista)
{
    int suma = 0;
    struct element * wsk = lista;

    while(wsk != NULL)
    {
        if(wsk->i < 0)
        {
            suma = suma + (wsk->i);
        }
        wsk = wsk->next;
    }
    return suma;
}
int main()
{
    struct element* lista = malloc(sizeof(struct element));
    lista->i = -3;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 10;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -12;
    lista->next->next->next = NULL;

    printf("%d\n", sumUj(lista));

    return 0;
}
