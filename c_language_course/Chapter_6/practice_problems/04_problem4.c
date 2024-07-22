#include <stdio.h>

int factorial(int* num) {

    if(*num == 0) {
        return 1;
    }

    int next = *num - 1;

    return *num * factorial(&next);

}

int main() {

    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("The factorial of %d is %d\n", num, factorial(&num));

    return 0;

}