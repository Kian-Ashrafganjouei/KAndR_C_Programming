#include <stdio.h>

void characterPrinter()
{
    int c;
    while ((c = getchar()) != EOF) // ctrl-d signals EOF
    {
        putchar(c); // goes char by char even if multiple chars are entered
    }
    printf("1==1 is %d, 1==0 is %d\n", (1==1), (1==0));
    printf("EOF value: %d\n", EOF);
    if (0) printf("0 Does not Enter\n");
    if (1) printf("1 Does Enter\n"); // Any non zero is valid
}

void characterCounter()
{
    long nc;
    nc = 0;
    while (getchar() != EOF) nc++;
    printf("%ld\n", nc);
}

int main() 
{
    //characterPrinter();
    characterCounter();
}