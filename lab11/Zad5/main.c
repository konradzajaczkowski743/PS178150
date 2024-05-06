#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char*  title;
    char*  author;
    int    publishedYear;
    int    pages;
} Book;

int main()
{

    Book Ksiazka1 = {"Kwiaty dla Algernona", "Keyes", 1959, 298};
    Book Ksiazka2 = {"Ja, robot", "Asimov", 1950, 240};

    return 0;
}
