// program to demonstrate the working of switch statement

#include <stdio.h>

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    switch(num) {

        case 1 : printf("MONDAY\n");
                 break;
        case 2 : printf("TUESDAY\n");
                 break;
        case 3 : printf("WEDNESDAY\n");
                 break;
        case 4 : printf("THRUSDAY\n");
                 break;
        case 5 : printf("FRIDAY\n");
                 break;
        case 6 : printf("SATURDAY\n");
                 break;
        case 7 : printf("SUNDAY\n");
                 break;
        default : printf("INVALID\n");                  

    }

    return 0;

}