// program to calculate the area of a circle

#include <stdio.h>

int main() {

    int radius;
    printf("Enter the radius of the circle : ");
    scanf("%d", &radius);

    float area = 3.14 * radius * radius;

    printf("Area of circle of radius %d is %f\n\n", radius, area);

    // modifying this existing code to calculate area of the cyliner

    int height;
    printf("Enter the height of the cylinder : ");
    scanf("%d", &height);

    float cylinder_area = (2 * 3.14159265 * radius * height) + (2 * 3.14159265 * (radius * radius));

    printf("Area of cylinder of radius %d and height %d is %f\n", radius, height, cylinder_area);
    
    return 0;

}