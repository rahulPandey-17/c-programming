#include <stdio.h>

int main() {

    int num;
    int table[10];

    printf("Enter the number : ");
    scanf("%d", &num);

    for(int i = 0 ; i < 10 ; i++) {
        table[i] = num * (i + 1);
    }

    printf("The multiplication table of %d is\n", num);

    for(int i = 0 ; i < 10 ; i++) {
        printf("%d\n", table[i]);
    }
    printf("\n");

    return 0;

}