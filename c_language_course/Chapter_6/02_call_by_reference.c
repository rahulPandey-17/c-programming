// program to demonstrate call by reference method

#include <stdio.h>

int sum(int* num1, int* num2) {

    *num1 = 20;
    return *num1 + *num2;

}

int main() {

    int num1, num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    // printf("Result of function by call by value method\n");
    // printf("Sum of the numbers is %d\n", sum(num1, num2));
    // printf("num1 = %d\nnum2 = %d\n", num1, num2);

    printf("Result of function by call by reference method\n");
    printf("Sum of the numbers is %d\n", sum(&num1, &num2));
    printf("num1 = %d\nnum2 = %d\n", num1, num2);

    return 0;

}