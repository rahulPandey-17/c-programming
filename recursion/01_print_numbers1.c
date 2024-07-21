// program to print numbers from n to 1 using recursion

#include <stdio.h>

void print_numbers_rev(int n) {

    if(n == 0) {
        return;
    }
    
    printf("%d\n", n);
    print_numbers_rev(n - 1);

}

int main() {

    int n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    print_numbers_rev(n);

    return 0;

}