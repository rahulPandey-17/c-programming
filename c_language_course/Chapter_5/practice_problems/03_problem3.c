// program to calculate the force on a body using function

#include <stdio.h>

int force(int mass) {
    return mass * 9.81;
}

int main() {

    int mass;

    printf("Enter the mass of the body : ");
    scanf("%d", &mass);

    printf("The force of attraction on the body of mass %d by the earth is %d N\n", mass, force(mass));

    return 0;

}