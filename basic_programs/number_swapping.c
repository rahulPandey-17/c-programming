#include <stdio.h>

int main() {

    int num1 = 10, num2 = 25;
    printf("Numbers before swapping\n");
    printf("a = %d\tb = %d\n", num1, num2);
    
    int temp = num2;
    num2 = num1;
    num1 = temp;

    printf("Numbers after swapping\n");
    printf("a = %d\tb = %d\n", num1, num2);
    
    return 0;

}