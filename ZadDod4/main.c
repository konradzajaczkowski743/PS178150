#include <stdio.h>
#include <stdlib.h>
void add_to_pointers(int* w1, int* w2, int* w3){
    *w1 = *w1 + 5;
    *w2 = *w2 + 10;
    *w3 = *w3 + 15;
}

int main()
{
    int z1 = 10, z2 = 20, z3 = 40;
    printf("%d, %d, %d\n", z1, z2, z3);
    add_to_pointers(&z1, &z2, &z3);
    printf("%d, %d, %d", z1, z2, z3);
    return 0;
}
