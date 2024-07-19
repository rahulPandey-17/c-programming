// program to convert degree celsius to degree fahrenheit

#include <stdio.h>

int main() {

    float celsius;
    printf("Enter the tempreature in degree celsius : ");
    scanf("%f", &celsius);

    float fahrenheit = (9 / 5.0) * celsius + 32;
    printf("Tempreature in degree fahrenheit is %.2f\n", fahrenheit);
    
    return 0;

}