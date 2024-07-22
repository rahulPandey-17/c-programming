#include <stdio.h>

void print_address(int* i) {
    printf("The address of i inside function = %p\n", i);
}

int main() {

    int i;
    int* p = &i;

    printf("The address of variable i = %p\n", p);

    print_address(&i);

    return 0;

}