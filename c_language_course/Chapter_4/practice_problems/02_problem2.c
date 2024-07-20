// program to print multiplication table of a given number in reverse order

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    for(int i = 10 ; i ; i--) {

        printf("%d x %d = %d\n", num, i, num * i);

    }

    return 0;

}