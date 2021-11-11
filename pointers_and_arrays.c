#include<stdio.h>
#include<ctype.h>
#include "getfuncs.h"

// C passes variables to functions by value
// so if a function is to swap two values x, y with each other
// this will not work cause it is actually getting values

// void swap(int x, int y) {
//     int temp;

//     temp = x;
//     x = y;
//     y = temp
// }

// it should be like this passing pointers of these variables

void swap(int *px, int *py) {
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

// a good usage of passing pointer is getint
int  getint(int *pn) {
    int c, sign;

    while(isspace(c = getch()))
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch()) {
        *pn = 10 * *pn + (c - '0');
    }

    *pn += sign;
    if (c != EOF) {
        ungetch(c);
    }

    return c;
}

void fillArrayWithIntUsingGetInt() {

    int n, array[10], getint(int *);
    for (n = 0; n < 10 && getint(&array[n]) != EOF; n++) {
        ;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d, ", array[i]);
    }
}


// this method calculate length of string by taking the address of the string beginning (as an array of chars)
int strlen(char *s) {
    int n;

    for (n = 0; *s != '\0'; s++) {
        n++;
    }

    return n;
}

void gettingArrayElementToPointer(){
    int a[5] = {10,24,214,12,14};
    char c[3] = {'c', 'n', 'n'};
    int *pc = c;

    int *pa;
    pa = &a[2];

    printf("%d\n", *pa);
    printf("%d\n", *(pa + 1));
    printf("%d\n", *(a + 1)); // a+1 is the address of element number 1 after first index (beginning of array address) in array so element 24
    printf("%d\n", *(a + 3)); // a+3 is the address of element number 3 after first index (beginning of array address) in array so element 12

    printf("%d\n", strlen("hello, world"));
    printf("%d\n", strlen(c));
    printf("%d\n", strlen(pc));
}


int main() {

    // char c = '1';

    // char *p = &c;

    // printf("%s\n", p);



    // int m = 12;
    // int n = 10;

    // swap(&m, &n);
    // printf("m %d n %d\n", m, n);

    // fillArrayWithIntUsingGetInt();

    gettingArrayElementToPointer();

    return 0;
}


