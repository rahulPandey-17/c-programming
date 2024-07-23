#include <stdio.h>

int main() {

    int marks[] = {45, 67, 78, 56};
    // int* ptr = &marks[0];
    int* ptr = marks; // works same as the above statement

    printf("printing array using normal iteration variable\n");
    for(int i = 0 ; i < 4 ; i++) {
        printf("%d. %d\n", i + 1, marks[i]);
    }
    printf("\n");

    printf("printing array using pointer\n");
    for(int i = 0 ; i < 4 ; i++) {
        
        printf("%d. %d\n", i + 1, *ptr);
        ptr++;

    }
    printf("\n");

    return 0;

}