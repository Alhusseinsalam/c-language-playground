#include <stdio.h>

#define MAXLINE 1000

int husgetline(char line[], int maxline);
void huscopy(char to[], char from[]);

main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = husgetline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            huscopy(longest, line);
        }
    }

    if (max > 0) {
        printf("%s", longest);
    }

    return 0;
}

int husgetline(char s[], int lim) {
    int c,i;
    
    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void huscopy(char to[], char from[]) {
    int i;
    
    i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}