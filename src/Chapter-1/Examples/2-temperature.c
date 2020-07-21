#include "stdio.h"

int introMessage()
{
    printf("This programm converting celsius and fahr\n");
    printf("-------------------------------------------\n");
    printf("\tFahr|\t | Celsius\n");
    printf("-------------------------------------------\n");
    return 0;
}

/* print Fahrengheit */
int main(int argc, char const *argv[])
{
    /* code */
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   // lower limit of temp table
    upper = 300; //
    step = 20;

    fahr = lower;

    introMessage();

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("\t%3.0f | \t |%6.1f\n", fahr, celsius); // %d %f
        fahr = fahr + step;
    }

    return 0;
}
