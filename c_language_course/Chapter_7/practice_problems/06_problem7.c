#include <stdio.h>

int main() {

    int table[3][10];
    int m[] = {2, 7, 9};

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 10 ; j++) {
            table[i][j] = m[i] * (j + 1);
        }
    }

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 10 ; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }

    return 0;

}