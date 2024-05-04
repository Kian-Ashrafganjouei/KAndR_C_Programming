#include <stdio.h>
#define MAXLINE 100

int getLine(char line[], int maxline);
void removeTrailing(char line[], int len);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0)
    {
        removeTrailing(line, len);
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

void removeTrailing(char line[], int len) {
    int start = 0; // Index to track the start of non-whitespace characters
    int end = len - 1; // Index to track the end of non-whitespace characters

    // Find the index of the last non-whitespace character
    while (end >= 0 && (line[end] == ' ' || line[end] == '\t' || line[end] == '\n' || line[end] == '\r')) {
        end--;
    }

    // Find the index of the first non-whitespace character
    while (start <= end && (line[start] == ' ' || line[start] == '\t' || line[start] == '\n' || line[start] == '\r')) {
        start++;
    }

    // Copy the non-whitespace characters to the original line
    int i;
    for (i = start; i <= end; i++) {
        line[i - start] = line[i];
    }

    // Null-terminate the line at the correct position
    line[i - start] = '\0';
}
