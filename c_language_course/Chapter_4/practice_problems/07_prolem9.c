// program to find factorial of a number using while loop

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int i = num;
    int fact = 1;

    while(i >= 1) {
        fact *= i;
        i--;
    }

    printf("The factorial of %d is %d\n", num, fact); 

    return 0;

}