#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Airplane {
    char* model;
    int   number_of_engines;
};

int funkcja10(int n, struct Airplane arg[]){
    int min = arg[0].number_of_engines;
    for (int i = 1; i<n; i++)
    {
       if (arg[i].number_of_engines < min)
       {
           min = arg[i].number_of_engines;
       }
    }
    return min;
}


int main()
{
    struct Airplane tablica[3];

    tablica[0] = (struct Airplane){"Airbus A380", 20};
    tablica[1] = (struct Airplane){"F16", 10};
    tablica[2] = (struct Airplane){"Boeing 777", 40};


    printf("%d", funkcja10(3,tablica));

    return 0;
}
