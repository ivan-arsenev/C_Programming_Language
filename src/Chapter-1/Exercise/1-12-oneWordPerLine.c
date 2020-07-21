#include "stdio.h"

#define IN 1
#define OUT 0

// write programm that prints its input one per line
int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            printf("\n");
        }
        if (state == IN)
        {
            nw = c;
            printf("%c", nw);
        }
    }
    printf("\n");
}