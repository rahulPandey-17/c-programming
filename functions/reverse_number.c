#include <stdio.h>

int reverse_number(int num) {

    int number = num;
    int rev = 0;

    while(number > 0) {
        rev = (rev * 10) + (number % 10);
        number /= 10;
    }

    return rev;

}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Reverse of %d is %d\n", num, reverse_number(num));
    
    return 0;

}