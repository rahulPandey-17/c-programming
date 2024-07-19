// program to calculate simple interest

#include <stdio.h>

int main() {

    int principal, time;
    float rate;
    printf("Enter the principal amount : ");
    scanf("%d", &principal);
    printf("Enter the interest rate : ");
    scanf("%f", &rate);
    printf("Enter the time duration : ");
    scanf("%d", &time);

    float si = (principal * rate * time) / 100.0;
    printf("The simple interest for the above values is %.2f\n", si);
    
    return 0;

}