#include "stdio.h"

#define IN 1  // inside a word
#define OUT 0 // outside a word

// Histogram that prints by length
void histogramPrint(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("| ");
    }
    printf("\n");
}

// Count lines, words, and chars in input
int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("lines:%d Words:%d chars:%d\n", nl, nw, nc);
    histogramPrint(nw);
}
