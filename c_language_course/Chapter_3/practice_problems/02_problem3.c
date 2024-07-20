// program to calculate income-tax

#include <stdio.h>

int main() {

    int income;
    printf("Enter your income : ");
    scanf("%d", &income);
    float tax;

    if(income < 250000) {
        tax = 0;
    }
    else if(income >= 250000 && income <= 500000) {
        tax = (5.0 / 100) * (income - 250000);
    }
    else if(income > 500000 && income <= 1000000) {
        tax = (5.0 / 100) * (500000 - 250000) + (20.0 / 100) * (income - 500000);
    }
    else {
        tax = (5.0 / 100) * (500000 - 250000) + (20.0 / 100) * (1000000 - 500000) + (30.0 / 100) * (income - 1000000);
    }

    printf("You have to pay Rs %.2f as tax\n", tax);

    return 0;

}