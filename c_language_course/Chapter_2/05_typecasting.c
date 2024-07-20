// program to demonstrate type-casting

#include <stdio.h>

int main() {

    int a = 45;
    float b = 32.65;

    printf("The value of %d type-casted to float is %.1f\n", a, (float) a);
    printf("The value of %f type-casted to int is %d\n", b, (int) b);

    return 0;

}