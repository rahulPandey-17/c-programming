// program to add two numbers using function

#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {

    int num1, num2;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    printf("The sum of %d and %d is %d\n", num1, num2, sum(num1, num2));

    return 0;

}