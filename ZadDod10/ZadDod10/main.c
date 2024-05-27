#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Country{
    char* name;
    int   area;
};

int funkcjaDod(struct Country arg[] , int n){
    int maks = arg[0].area;
    for (int i = 1; i<n; i++)
    {
       if (arg[i].area > maks)
       {
           maks = arg[i].area;
       }
    }
    return maks;
}

int main()
{
    struct Country tablica[3];

    tablica[0] = (struct Country){"Cypr", 120};
    tablica[1] = (struct Country){"Kanada", 50000};
    tablica[2] = (struct Country){"Hiszpania", 9000};


    printf("%d", funkcjaDod(tablica, 3));
    return 0;
}
