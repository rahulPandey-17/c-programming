#include <stdio.h>

int main() {

    int marks[5];

    printf("Enter marks of 5 students : \n");
    for(int i = 0 ; i < 5 ; i++) {
        scanf("%d", &marks[i]);
    }

    printf("You have entered the following marks\n");
    for(int i = 0 ; i < 5 ; i++) {
        printf("%d. %d\n", i + 1, marks[i]);
    }
    printf("\n");

    return 0;

}