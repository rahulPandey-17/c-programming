#include <stdio.h>

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int number = num;
    int rev = 0;
    while(number > 0) {
        rev = (rev * 10) + (number % 10);
        number /= 10;
    }

    printf("Reverse of %d is : %d\n", num, rev);
    
    return 0;

}