#include <stdio.h>
#include <ctype.h>

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n) {
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else
        return 0;
}

void afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}

void main() {
    
    char *p = alloc(345);
    *p = 'a';
    *(p+1) = 'b';
    printf("%p\n", p);
    printf("%c\n", *p);
    printf("%p\n", p+1);
    printf("%c\n", *(p+1));
    printf("%c\n", p[1]);

    printf("Free\n");
    afree(p);

    char *x = alloc(345);

    printf("%p\n", p);
    printf("%p\n", x);
    printf("%p\n", p+1);
    printf("%p\n", x+1);
    printf("%c\n", *x);
    printf("%c\n", *(x+1));


    printf("size of character is %d\n", sizeof('a'));
}