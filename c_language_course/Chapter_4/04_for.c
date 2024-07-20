// program to demonstrate the working of for loop

#include <stdio.h>

int main() {

    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(int i = 1 ; i <= n ; i++) {
        printf("%d\n", i);
    }

    printf("\n");

    printf("The above natural numbers in reverse order is\n");

    for(int i = n ; i ; i--) {
        printf("%d\n", i);
    }

    return 0;

}