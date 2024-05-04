#include <stdio.h>

void numCounter()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    while((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == '\n' || c == '\t' || c == ' ')
            ++nwhite;
        else
            ++nother;
    }

    printf("Digits =");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", ndigit[i]);
    }
    
}

void asciPrint()
{
    int i;

    printf("ASCII values of the first 100 characters:\n");
    for (i = 0; i < 100; i++) {
        printf("%c : %d\n", i, i);
    }

    return 0;
}

int main()
{
    //numCounter();
    asciPrint();
}