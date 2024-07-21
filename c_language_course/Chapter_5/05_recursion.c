// program to demonstrate recursion

#include <stdio.h>

int factorial(int num) {

    if(num == 0) {
        return 1;
    }

    return num * factorial(num - 1);

}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Negative numbers doesn't have factorials\n");
    }
    else {
        printf("The factorial of %d is %d\n", num, factorial(num));
    }

    return 0;

}