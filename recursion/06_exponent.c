// program to calculate number raised to a power using recursion

#include <stdio.h>

int power(int num, int expo) {

    if(expo == 0) {
        return 1;
    }

    if(num == 0) {
        return 0;
    }

    return num * power(num, expo - 1);

}

int main() {

    int num, expo;

    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the power : ");
    scanf("%d", &expo);

    printf("%d raised to %d is %d\n", num, expo, power(num, expo));

    return 0;

}