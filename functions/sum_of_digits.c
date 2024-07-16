#include <stdio.h>

int sum_of_digits(int num) {

    int number = num;
    int sum = 0;

    while(number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;

}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("The sum of digits of %d is %d\n", num, sum_of_digits(num));
    
    return 0;

}