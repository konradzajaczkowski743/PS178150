#include <stdio.h>
#include <stdlib.h>

struct Tool {
    char* name;
    char  type[30];
    int   weight;
    int   isAvailableForHire;
};

int main()
{
    struct Tool tool1 = {"Romek", "Traktor", 4050, 1};
    struct Tool tool2 = {"Tomek", "Koparka", 10060, 0};

    return 0;
}
