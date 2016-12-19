#include <stdio.h>


float K_9_BY_5 = 9.0 / 5.0;
float K_32 = 32.0;

int SUCCESS = 0;


int main(void)
{
    float celsius, fahrenheit;
    int lower, upper, step;

    lower = -100;
    upper = 200;
    step = 20;

    printf("|-------------|\n");
    printf("|%6s|%6s|\n", "C", "F");
    printf("|-------------|\n");

    celsius = lower;
    while (celsius <= upper) {
        fahrenheit = (celsius * K_9_BY_5) + K_32;
        printf("|%6.1f|%6.1f|\n", celsius, fahrenheit);
        celsius = celsius + step;
    }

    printf("|-------------|\n");

    return SUCCESS;
}
