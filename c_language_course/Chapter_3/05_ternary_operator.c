// program to demonstrate the working of ternary operator(shorthand if-else)

#include <stdio.h>

int main() {

    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    (age >= 18) ? printf("You can vote\n") : printf("You cannot vote\n");

    return 0;

}