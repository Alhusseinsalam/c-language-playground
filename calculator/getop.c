#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

getop() {
    int i, c;

    // use while to pass over any blanks or tab
    while ((s[0] = c = getch()) == ' ' || c == '\t') {
        ;
    }

    s[1] = '\0';
    if (!isdigit(c) && c != '.') {
        return c;
    }

    i = 0;
    if (isdigit(c)) {
        while(isdigit(s[++i] = c = getch())) {
            ;
        }
    }

    if (c == '.') {
        while (isdigit(s[++i] = c = getch())) {
            ;
        }
    }

    s[i] = '\0';
    if (c != EOF) {
        ungetch(c);

    }

    return NUMBER;
}