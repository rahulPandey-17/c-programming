#include <stdio.h>

int sum(int* num1, int* num2) {
    return *num1 + *num2;
}

float average(int* num1, int* num2) {
    return (*num1 + *num2) / 2.0;
}

int main() {

    int num1, num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    printf("The sum of %d and %d id %d\n", num1, num2, sum(&num1, &num2));
    printf("The average of %d and %d id %.2f\n", num1, num2, average(&num1, &num2));

    return 0;

}