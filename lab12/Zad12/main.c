#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char* title;
    int   page_count;
};

struct Book funkcja12(int n, struct Book arg[]){
    struct Book maks;
    maks = arg[0];
    for (int i=1; i<n; i++)
    {
       if (arg[i].page_count >= maks.page_count)
       {
            maks = arg[i];
       }
    }
    return maks;
}

void showBook(struct Book arg){
    printf("%s %d", arg.title, arg.page_count);
}


int main()
{
    struct Book tablica[3];

    tablica[0] = (struct Book){"Alicja w krainie Czarow", 130};
    tablica[1] = (struct Book){"Potop", 400};
    tablica[2] = (struct Book){"Ogniem i mieczem", 400};
    tablica[3] = (struct Book){"Przedwiosnie", 200};

    showBook(funkcja12(3,tablica));

    return 0;
}

