#include <stdio.h>

int main() {

    int table[10];

    for(int i = 0 ; i < 10 ; i++) {
        table[i] = 5 * (i + 1);
    }

    // printing the array

    printf("The resultant array is\n");
    
    for(int i = 0 ; i < 10 ; i++) {
        printf("%d ", table[i]);
    }
    printf("\n");

    return 0;

}