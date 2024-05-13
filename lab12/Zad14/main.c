#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Bike{
    char model[40];
    int distance_travelled;
};

struct Bike * initBike(char model2[40],int distance_travelled2){
    if (strlen(model2)<3 || distance_travelled2<=0)
        return NULL;
    struct Bike * wsk = malloc(sizeof(struct Bike));
    strcpy(wsk->model, model2);
    wsk->distance_travelled = distance_travelled2;
    return wsk;
}

void increaseDistance(struct Bike *wsk){
    wsk->distance_travelled +=500;
}

int main()
{
    struct Bike * rower = initBike("Romet", 100);
    if (rower != NULL)
    {
        printf("%s %d\n", rower->model, rower->distance_travelled);
        increaseDistance(rower);
        printf("%s %d\n", rower->model, rower->distance_travelled);
    }

    return 0;
}
