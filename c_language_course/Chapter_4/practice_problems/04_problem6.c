// program to print the sum of first 10 natural numbers using for loop and do-while loop

#include <stdio.h>

int main() {

    int sum = 0;

    // using for loop
    /*
    for(int i = 1 ; i <= 10 ; i++) {
            sum += i;
        }

        printf("The sum of first 10 natural numbers using for loop is %d\n", sum);
    */

    // using do-while loop

    int i = 1;

    do {

        sum += i;
        i++;

    }while(i <= 10);

    printf("The sum of first 10 natural numbers using do-while loop is %d\n", sum);
    

    return 0;

}