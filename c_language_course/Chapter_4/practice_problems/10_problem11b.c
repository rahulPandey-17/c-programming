// program to check if a number is prime or not using do-while loop

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(num < 2) {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    if(num == 2) {
        printf("%d is a prime number\n", num);
        return 0;
    }

    if(num % 2 == 0) {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    int i = 3;
    int isPrime = 1;
    
    do {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
        i += 2;
    }while(i <= (num / 2));

    if(isPrime) {
        printf("%d is a prime number\n", num);
    }
    else {
        printf("%d is not a prime number\n", num);
    }

    return 0;

}