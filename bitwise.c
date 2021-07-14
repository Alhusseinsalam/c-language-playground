#include <stdio.h>

main()
{
    int x;
    int y;
    printf("size of x: %d\n", sizeof(x));
    printf("size of y: %d\n", sizeof(y));
    printf("------------------------\n");
    
    x = 4;
    y = 7;
    // bitwise AND
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("x&y: %d\n", (x & y));
    printf("------------------------\n");

    x = 4;
    y = 7;
    // bitwise inclusive OR
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("x|y: %d\n", (x | y));
    printf("------------------------\n");

    x = 4;
    y = 7;
    // bitwise exclusive OR
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("x^y: %d\n", (x ^ y));
    printf("------------------------\n");

    x = 4;
    y = 7;
    // left shift
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("x<<1: %d\n", (x << 1));
    printf("y<<1: %d\n", (y << 1));
    printf("------------------------\n");

    x = 4;
    y = 7;
    // right shift
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("x>>1: %d\n", (x >> 1));
    printf("y>>1: %d\n", (y >> 1));
    printf("------------------------\n");

    x = 4;
    y = 7;
    // one's complement
    printf("x: %d\n", x);
    printf("~x: %d\n", ~x);
    printf("y: %d\n", y);
    printf("~y: %d\n", ~y);
    printf("------------------------\n");
}

