// program to print fibonacci series element using recursion

#include <stdio.h>

int fib(int n) {

    if(n == 1 || n == 2) {
        return n - 1;
    }

    return fib(n - 1) + fib(n - 2);

}

int main() {

    int n;

    printf("Enter the place for which you want to find the element : ");
    scanf("%d", &n);

    printf("The element at place %d in fibonacci series is %d\n", n, fib(n));

    return 0;

}