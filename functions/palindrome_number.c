#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {

    int number = num;
    int rev = 0;

    while(number > 0) {
        rev = (rev * 10) + (number % 10);
        number /= 10;
    }

    return (rev == num);

}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(isPalindrome(num)) {
        printf("%d is a palindrome\n", num);
    }
    else {
        printf("%d is not a palindrome\n", num);
    }
    
    return 0;

}