#include <stdio.h>
#define MAXLINE 100

int getLine(char line[], int maxline);
void reverse(char line[], int len);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0)
    {
        reverse(line, len);
        printf("%s\n", line);
    }
    return 0;
}

int getLine(char line[], int limit)
{
    int i, c;
    for (i = 0; i < limit - 1 && (c=getchar())!=EOF && c != '\n'; i++)
        line[i]=c;
    if(c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void reverse(char line[], int len) {
    char temp[MAXLINE];

    int i;
    for (i = 0; i <= len; i++) {
        temp[i] = line[i];
    }

    for (i = 0; i <= len - 1 ; i++) {
        line[i] = temp[len - i - 1];
    }
}
