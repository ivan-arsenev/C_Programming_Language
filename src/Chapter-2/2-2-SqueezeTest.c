#include "stdio.h"
#include "squeeze.h"



int main()
{
    extern char line[];


    getline(); // takes a line and bring it to line var
    printf(line);
}
