// program to demonstrate associativity of operators

#include <stdio.h>

int main() {

    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value of (a * b / c + 7) is %d\n", (a * b / c + 7));
    printf("The value of (3 * a - 8 * b) is %d\n", (3 * a - 8 * b));

    return 0;

}