// program to print the sum of first n natural numbers

#include <stdio.h>

int sum_natural(int n) {

    if(n == 1) {
        return 1;
    }

    return n + sum_natural(n - 1);

}

int main() {

    int n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("The sum of all natural numbers till %d is %d\n", n, sum_natural(n));

    return 0;

}