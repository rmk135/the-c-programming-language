#include <stdio.h>


float K_5_BY_9 = 5.0 / 9.0;
float K_32 = 32.0;

int SUCCESS = 0;


int main(void)
{
    float fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    printf("|-----------|\n");
    printf("|%4s|%6s|\n", "F", "C");
    printf("|-----------|\n");

    fahrenheit = lower;
    while (fahrenheit <= upper) {
        celsius = K_5_BY_9 * (fahrenheit - K_32);
        printf("|%4.0f|%6.1f|\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }

    printf("|-----------|\n");
    
    return SUCCESS;
}
