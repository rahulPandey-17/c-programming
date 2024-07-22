// program to print fibonacci series using recursion

#include <stdio.h>

int fibonacci(int n) {

    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);

}

int main() {

    int n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("The fibonacci series till %d terms is :\n", n);
    for(int i = 0 ; i < n ; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;

}