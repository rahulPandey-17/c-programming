// program to calculate the area of a square with help of library function

#include <stdio.h>
#include <math.h>

double area(int side) {
    return pow(side, 2);
}

int main() {

    int side;
    printf("Enter the value of side of the square : ");
    scanf("%d", &side);

    printf("The area of the square of side %d is %.2lf units\n", side, area(side));

    return 0;

}