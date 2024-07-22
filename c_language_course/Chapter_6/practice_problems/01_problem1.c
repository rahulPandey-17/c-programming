// program to print the address of the variable and use this address to get value of the variable

#include <stdio.h>

int main() {

    int number = 25;
    int* address = &number;

    printf("The address of variable number is = %p\n", address);
    printf("The value at address %p is = %d\n", address, *address);

    return 0;

}