#include <stdio.h>
#include <stdlib.h>
struct Car {
    char* brand;
    char  model[50];
    int   year;
    int   isAvailable;
};


int main()
{
    struct Car Auto1 = {"Renault", "Kangoo", 2003, 1};
    struct Car Auto2 = {"Skoda", "Fabia", 2006, 0};
    struct Car Auto3 = {"Kia", "Rio", 2012, 1};

    return 0;
}
