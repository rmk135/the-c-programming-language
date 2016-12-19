#include <stdio.h>


float K_5_BY_9 = 5.0 / 9.0;
float K_32 = 32;


int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    printf("|-----------|\n");
    printf("|%4s|%6s|\n", "F", "C");
    printf("|-----------|\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = K_5_BY_9 * (fahr - K_32);
        printf("|%4.0f|%6.1f|\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("|-----------|\n");
    
    return 0;
}
