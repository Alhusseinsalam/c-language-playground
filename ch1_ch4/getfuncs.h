#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

int ungetch(int c) {
    if (bufp >= BUFSIZE) {
        printf("too many");
    } else {
        buf[bufp++] = c;
    }
}