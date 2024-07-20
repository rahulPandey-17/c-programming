// program to find factorial of a number using for loop

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int fact = 1;

    for(int i = num ; i >= 1 ; i--) {
        fact *= i;
    }

    printf("The factorial of %d is %d\n", num, fact);

    return 0;

}