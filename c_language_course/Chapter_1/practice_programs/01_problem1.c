// program to calculate area of a rectangle

#include <stdio.h>

int main() {

    // using hardcode values

    int len = 12;
    int width = 10;

    int area = len * width;

    printf("Result of hardcoded values :\n");
    printf("The area of the rectangle of length %d and width %d is %d\n\n", len, width, area);

    // using user input

    int l, b;
    printf("Enter the length of the triangle : ");
    scanf("%d", &l);
    printf("Enter the breadth of the triangle : ");
    scanf("%d", &b);

    int a = l * b;
    printf("Result of user-input values :\n");
    printf("Area of rectangle of length %d and breadth %d is %d\n", l, b, a);
    
    return 0;

}