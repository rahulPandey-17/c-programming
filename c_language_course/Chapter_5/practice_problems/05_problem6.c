// program to calculate sum of first n natural numbers using recursion

#include <stdio.h>

int sum(int n) {

    if(n == 1) {
        return 1;
    }

    return sum(n - 1) + n;

}

int main() {

    int n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("The sum of all natural numbers till %d is %d\n", n, sum(n));

    return 0;

}