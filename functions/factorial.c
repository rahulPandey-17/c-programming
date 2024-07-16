#include <stdio.h>

int factorial(int num) {

    int fact = 1;
    for(int i = num ; i >= 1 ; i--) {
        fact *= i;
    }

    return fact;

}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));
    
    return 0;

}