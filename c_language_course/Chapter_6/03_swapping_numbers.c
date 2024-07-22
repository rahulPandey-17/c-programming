// program to swap two numbers using call by reference method

#include <stdio.h>

void swap(int* num1, int* num2) {

    int temp = *num2;
    *num2 = *num1;
    *num1 = temp;

}

int main() {

    int num1, num2;

    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);

    swap(&num1, &num2);

    printf("Values of num1 and num2 after swapping are\n");
    printf("num1 = %d\nnum2 = %d\n", num1, num2);

    return 0;

}