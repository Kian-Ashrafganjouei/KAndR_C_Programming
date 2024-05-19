#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int max);
int strindex(char source[], int length, char searchfor[]);

char pattern[] = "cold";

// finds index of the right most pattern in string
int main()
{
    char line[MAXLINE];
    int found = 0;
    int index = -1;
    int length = -1;
    while((length = getLine(line, MAXLINE)) > 0) {
        if((index = strindex(line, length, pattern)) >= 0) {
            printf("%s, found %s at index %d\n", line, pattern, index);
            found++;
        }
    }
    return found;
}

// getline into s, return length
int getLine(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c!= '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

// strindex return index of t in s, -1 if none
int strindex(char s[], int length, char t[])
{
    int i, j, k;

    for (i = length; i>=0; i--)
    {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++);
        if (k > 0 && t[k]=='\0') return i;
    }
    return -1;
}