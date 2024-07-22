#include <stdio.h>

int main() {

    int i = 20;
    int* p = &i;
    int** k = &p;

    printf("The address of i is %p\n", p);
    printf("The value of k is %p\n", *k);
    printf("The value of i is %d\n", **k);

    return 0;

}