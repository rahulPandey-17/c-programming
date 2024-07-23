// program to demonstrate passing array to a function

#include <stdio.h>

void print_array(int num[]) {

    for(int i = 0 ; i < 4 ; i++) {
        printf("%d. %d\n", i + 1, num[i]);
    }

}

int main() {

    int num[4];

    printf("Enter the array elements (4) : ");
    for(int i = 0 ; i < 4 ; i++) {
        scanf("%d", &num[i]);
    }

    print_array(num);

    return 0;

}