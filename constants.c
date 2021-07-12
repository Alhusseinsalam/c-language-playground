#include<stdio.h>
#include<string.h>

#define BELL '\a'
#define str "HELLOA"
main()
{

    printf("length of string = %i\n", strlen(str));

    int i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }



    // enums
    // first name in an enum i.e. 'NO' has a value of 0
    // the second name has a value of 1 and so on
    enum boolean {NO, YES};


    // explicitly specified values
    enum escapes {BELL = '\a', BACKSPACE = '\b'};

    // if explicitly specified
    // then the values of the rest of the name will pickup from last specified value
    // in example below JAN is given value of 0, so the values of the rest of the names will be
    // FEB = 2
    // MAR = 3
    // ..etc.

    enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL,
                    AUG, SEP, OCT, NOV, DEC};
    
}