// program to demonstrate the working of do-while loop

#include <stdio.h>

int main() {

    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("The first %d natural numbers are\n", n);

    int i = 1;

    do {

        printf("%d\n", i);
        i++;

    }while(i <= n);
    

    return 0;

}