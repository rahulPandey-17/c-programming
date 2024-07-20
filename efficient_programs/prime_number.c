// program to check if a number is prime or not

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {

    if(num < 2) {
        return false;
    }

    if(num == 2) {
        return true;
    }

    if(num % 2 == 0) {
        return false;
    }

    int limit = sqrt(num);

    for(int i = 3 ; i <= limit ; i += 2) {
        if(num % i == 0) {
            return false;
        }
    }

    return true;

}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(isPrime(num)) {
        printf("%d is a prime number\n", num);
    }
    else {
        printf("%d is not a prime number\n", num);
    }

    return 0;

}