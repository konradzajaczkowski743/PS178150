#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    double  width;
    double  height;
    char*   color;
};

int main()
{
    struct Rectangle prostokat[4];

    prostokat[0] = (struct Rectangle){21.1, 4.0, "Red"};
    prostokat[1] = (struct Rectangle){19.8, 5,2, "Green"};
    prostokat[2] = (struct Rectangle){20.2, 4.5, "Blue"};
    prostokat[3] = (struct Rectangle){22.4, 3.5, "Black"};

    return 0;
}
