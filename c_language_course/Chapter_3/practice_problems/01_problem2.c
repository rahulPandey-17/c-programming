// program to determine whether a student is pass or not

#include <stdio.h>

int main() {

    int sub1, sub2, sub3;
    printf("Enter the marks of subject 1 : ");
    scanf("%d", &sub1);
    printf("Enter the marks of subject 2 : ");
    scanf("%d", &sub2);
    printf("Enter the marks of subject 3 : ");
    scanf("%d", &sub3);

    float perc = ((sub1 + sub2 + sub3) / 300.0) * 100;

    if((perc >= 40) && (sub1 >= 33 && sub2 >= 33 && sub3 >= 33)) {
        printf("You passed the exam\n");
    }
    else {
        printf("You failed\n");
    }

    return 0;

}