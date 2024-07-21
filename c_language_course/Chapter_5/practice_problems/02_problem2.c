// program to convert degree celsius to degree fahrenheit using function

#include <stdio.h>

float fah(int temp) {
    return (temp * (9 / 5.0)) + 32;
}

int main() {

    int temp;
    
    printf("Enter the tempreature (in celsius) : ");
    scanf("%d", &temp);

    printf("%d in fahrenheit is %.2f\n", temp, fah(temp));

    return 0;

}