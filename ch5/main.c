#include <stdio.h>
#include <ctype.h>

void println(char *msg) {
    printf("%s", msg);
    printf("\n");
}

/** wrong method, pass by value and won't change  **/
void squareInt(int i) {
    i = i * i;
}

/** this will work cause i'm passing the pointer by ref **/
void squareIntByRef(int *ip) {
    *ip = *ip * *ip;
}


// /* getint: get next integer from input into *pn */
// int getint(int *pn) {
//     int c, sign;
    
//     // skip white space
//     while (isspace(c = getch())) {
//         ;
//     }

//     if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
//         ungetch(c);
//         return 0;
//     }

//     sign = (c == '-') ? -1 : 1;
//     if (c == '+' || c == '-') {
//         c =getch();
//     }

//     for (*pn = 0; isdigit(c); c=getch()) {
//         *pn = 10 * *pn + (c - '0');
//     }

//     *pn *= sign;
//     if (c != EOF) {
//         ungetch(c);
//     }

//     return c;

// }


int strlen(char *s) {
    int n;
    for (n = 0; *s != '\0'; s++) {
        n++;
    }

    return n;
}

void main() {
    printf("Test\n");

    int x = 1, y =2 , z[10];
    int *ip;
    ip = &x;
    printf("*ip: %d\n", *ip);
    printf("ip: %p\n", ip);
    printf("&x: %p\n", &x);
    printf("&ip: %p\n", &ip);
    y = *ip;
    *ip = 0;
    printf("ip point to x: %p\n", ip);

    ip=&z[0];
    *ip = 234;
    int *iq = ip;
    printf("iq %d\n", *iq);
    printf("iq %p\n", iq);


    println("T");   

    int i = 10;
    printf("original: %d\n", i);

    squareInt(i);
    printf("after square by val: %d\n", i);

    squareIntByRef(&i);
    printf("after square by ref: %d\n", i);



    // getint(&i);
    // printf("I: %d\n", i);

    // arrays and pointers
    // array of size 10
    int a[10];
    a[0] = 100;
    a[1] = 200;
    // another way of doing it cause a is the location of the first element in the array
    *(a + 2) = 300;
    a[3] = 500;
    // pointer
    int *pa;

    // points to first element in the array
    // could also be written as pa = a; cause a [the name of the array] is a synonym for the location of the initial element
    pa = &a[0];

    // copy content of a[0] to x
    x = *pa;
    printf("x: %d\n", x);
    // copy content of a[1] to x
    x = *(pa+1);
    printf("x: %d\n", x);

    // copy content of a[2] to x
    x = *(pa+2);
    printf("x: %d\n", x);


    // since a is the location of the first element in the array
    // referencing the array can be done as follows
    int d3 = a[3];
    printf("d3: %d\n", d3);
    // or can be done as
    d3 = *(a+3);
    printf("d3: %d\n", d3);


    // only difference between pointer and array is
    // pinuter is a varialbe while array is not a variable
    //  pa=a and pa++ are legal
    // a = pa and a++ are illegal

    // if array name is passed to a function, what is really passed is the location of initial element

    printf("Hello length is : %d\n", strlen("hello"));
}
