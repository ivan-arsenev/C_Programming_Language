#include "stdio.h"

#define LOWER 0   /* Lower limit of temp */
#define UPPER 300 // Max limit of temp
#define STEP 20   // Step for increasing

// Printing func for intro message
int introMessage()
{
    printf("This programm converting celsius and fahr\n");
    printf("-------------------------------------------\n");
    printf("\tFahr|\t | Celsius\n");
    printf("-------------------------------------------\n");
    return 0;
}

/* print Fahrengheit */
int main()
{
    int fahr;

    introMessage();
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("\t%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
