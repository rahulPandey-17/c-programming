// program to demonstrate the working of call by value method

#include <stdio.h>

/*the below function will not change the value of the given number,
because the copy of the original number is given to the function not the original number itself.
This happened because the function is using call by value method*/

int change(int num) {
    num = 60;
    return num;
}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Value given by the change function is %d\n", change(num));
    printf("Value of num after function call is %d\n", num);

    return 0;

}