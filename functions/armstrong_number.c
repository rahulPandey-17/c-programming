#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int count_digits(int num) {

    int count = 0;
    while(num > 0) {
        num /= 10;
        count++;
    }

    return count;

}

bool isArmstrong(int num) {

    int number = num;
    int power = count_digits(number);
    int armstrong = 0;

    while(number > 0) {

        armstrong += pow((number % 10), power);
        number /= 10;

    }

    return (armstrong == num);

}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(isArmstrong(num)) {
        printf("%d is a armstrong number\n", num);
    }
    else {
        printf("%d is not a armstrong number\n", num);
    }
    
    return 0;

}