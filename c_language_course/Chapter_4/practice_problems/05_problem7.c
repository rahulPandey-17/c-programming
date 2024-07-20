// program to calculate the sum of all multiples of 8 upto 80

#include <stdio.h>

int main() {

    int sum = 0;

    for(int i = 8 ; i <= 80 ; i++) {

        if(i % 8 == 0) {
            sum += i;
        }

    }

    printf("The sum of all multiple of 8 upto 80 is %d\n", sum);

    return 0;

}