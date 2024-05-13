#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char brand[20];
    int  mileage;
};

struct Car * initCar(char brand2[], int mileage2){
    struct Car * wsk = malloc(sizeof(struct Car));
    //(*wsk).age = age2;
    wsk -> mileage = mileage2;
    strcpy(wsk -> brand, brand2);
    return wsk;
};

void showCar(struct Car arg){
    printf("%s %d\n", arg.brand, arg.mileage);
}

void mileageService(struct Car * wsk){
    wsk -> mileage = wsk -> mileage + 10000;
}


int main()
{
    struct Car * Auto = initCar("skoda", 200000);
    showCar(*Auto);
    mileageService(Auto);
    showCar(*Auto);
    return 0;
}
