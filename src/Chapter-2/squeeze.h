
#define MAXLINE 1000 // maximum input line size

int max;
char line[MAXLINE];    // current input line
char longest[MAXLINE]; // longest line saved here

// squeeze: delete all c from s
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

// getline: read a line into s, return length alse puts char '\0' to end
int getline()
{
    int c, i;

    for (i = 0; i < MAXLINE - 1 &&
                (c = getchar()) != EOF &&
                c != '\n';
         ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}