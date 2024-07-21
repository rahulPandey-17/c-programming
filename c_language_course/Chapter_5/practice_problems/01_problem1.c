// program to find average of three numbers using function

#include <stdio.h>

float average(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {

    int num1, num2, num3;

    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    printf("Enter the third number : ");
    scanf("%d", &num3);

    printf("The average of %d , %d and %d is %.2f\n", num1, num2, num3, average(num1, num2, num3));

    return 0;

}