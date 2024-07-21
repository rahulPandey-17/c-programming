// program to print numbers from 1 to 5 using recursion

#include <stdio.h>

void print_numbers(int n) {

    if(n == 6) {
        return;
    }

    printf("%d\n", n);
    print_numbers(n + 1);

}

int main() {

    int n = 1;

    print_numbers(n);

    return 0;

}