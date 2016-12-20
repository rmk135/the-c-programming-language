#include <stdio.h>


int SUCCESS = 0;

float F_5_BY_9 = 5.0 / 9.0;
float F_32 = 32.0;

float LOWER = 300.0;
float UPPER = 0.0;
float STEP = -20.0;


int main(void)
{
    float fahrenheit;
    float celsius;

    for (fahrenheit = LOWER; 
            fahrenheit >= UPPER; 
            fahrenheit = fahrenheit + STEP) {
        celsius = F_5_BY_9 * (fahrenheit - F_32);

        printf("%3.0f %6.1f\n", fahrenheit, celsius);
    }

    return SUCCESS;
}
