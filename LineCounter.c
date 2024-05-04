#include <stdio.h>
#define MAXLINE 100

int getLineLength(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getLineLength(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
        
    }
    printf("Longest: %s", longest);
    return 0;
}

int getLineLength(char line[], int limit)
{
    int i, c;
    for (i = 0; i < limit - 1 && (c=getchar())!=EOF && c != '\n'; i++)
        line[i]=c;
    if(c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\n';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\n')
        i++;    
}   