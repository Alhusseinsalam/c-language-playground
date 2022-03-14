#include <stdio.h>
#include <stdlib.h>

void square(double x){ 
    x = x * x;
}

void square2(double *px) {
    *px = *px * *px;
}


void strcopy1(char *s, char *t) {
    while ((*s++ = *t++) != '\0')
    {
        printf("\n%c", *s);
    }
}

void main() {
    double x = 10.0;

    square(x);
    printf("Passed by Val: %f", x);

    printf("\n");

    square2(&x);
    printf("Passed by Ref: %f", x);
    printf("\n");

    char *msg = "Here we go";
    char *t = malloc(50);

    printf("\nAA: %c\n", *msg++);

    strcopy1(msg, t);

    printf("T: %c", *t);

}
