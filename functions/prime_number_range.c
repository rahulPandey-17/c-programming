#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {

    if(num < 2) {
        return false;
    }

    for(int i = 2 ; i <= (num / 2) ; i++) {
        if(num % i == 0) {
            return false;
        }
    }

    return true;

}

int main() {

    int start, end;
    printf("Enter the starting interval : ");
    scanf("%d", &start);
    printf("Enter the ending interval : ");
    scanf("%d", &end);

    for(int i = start + 1 ; i < end ; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    
    return 0;

}