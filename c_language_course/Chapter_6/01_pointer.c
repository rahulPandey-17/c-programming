// program to demonstrate working of pointers

#include <stdio.h>

int main() {

    int num = 17;
    int* p = &num;
    int** k = &p;

    printf("Value of p is %p\n", p);
    printf("Actual value stored in p is %d\n", *p);
    printf("The address of pointer j is %p\n", k);
    printf("Value stored in pointer k is %p\n", *k);

    return 0;

}