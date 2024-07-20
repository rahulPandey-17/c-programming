// program to find if a number is prime or not using while loop

#include <stdio.h>

int main() {

    int num;
    int flag = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(num < 2) {
        printf("%d is not a prime number\n", num);
    }
    else {

        int i = 2;

        while(i <= (num / 2)) {
            if(num % i == 0) {
                flag = 1;
                break;
            }
            i++;
        }

        if(flag == 0) {
            printf("%d is a prime number\n", num);
        }
        else {
            printf("%d is not a prime number\n", num);
        }

    }

    return 0;

}