#include<stdio.h>
#include<string.h>

#define BELL '\a'
#define TEST_STR "HELLOA"
#define MAX_SIZE 25

main()
{

    printf("length of string = %i\n", strlen(TEST_STR));

    int i = 0;
    while (TEST_STR[i] != '\0') {
        printf("%c\n", TEST_STR[i]);
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
    

    // "const" keyword is used to make the variable constant

    const double e = 2.7182818284;

    // for arrays it make the elements unchangable
    const char msg[] = "warning: ";

}

// const can be used function declaration to prevent the function from changing the array

int getSize(const char[]) {
    // return size of array
    // can't change anything in the array cause it have const

    return 0;
}
