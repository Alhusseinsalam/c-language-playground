#include<stdio.h>

int main() {
    static int var1 = 10;
    printf("V: %d", var1);
    var1++;
    return 0;

}