#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double  temperature;
    double  humidity;
    double  windSpeed;
} WeatherInfo;

int main()
{

    WeatherInfo Warszawa = {19.6, 17.6, 40.3};
    WeatherInfo Krakow = {21.6, 9.6, 10.3};
    WeatherInfo Gdansk = {18.2, 24.3, 45.3};
    return 0;
}
