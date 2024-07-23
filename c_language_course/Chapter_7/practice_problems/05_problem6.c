#include <stdio.h>

int count_pos(int num[]) {

    int count = 0;

    for(int i = 0 ; i < 8 ; i++) {
        if(num[i] > 0) {
            count++;
        }
    }

    return count;

}

int main() {

    int num[] = {12, -5, -9, 45, 67, 34, -25, 89};

    printf("There are %d positive integers in the array\n", count_pos(num));

    return 0;

}