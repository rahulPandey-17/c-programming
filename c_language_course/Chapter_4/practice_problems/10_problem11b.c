// program to find if a number is prime or not using do-while loop

#include <stdio.h>

int main() {

    int num;
    int i = 2;
    int flag = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num < 2) {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    if(num == 2) {
        printf("%d is a prime number\n", num);
        return 0;
    }

    do {

        if(num % i == 0) {
            flag = 1;
            break;
        }
        i++;

    }while(i <= (num / 2));

    if(flag == 0) {
        printf("%d is a prime number\n", num);
    }
    else {
        printf("%d is not a prime number\n", num);
    }

    return 0;

}