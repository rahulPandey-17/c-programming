// program to demonstrate if-else if-else

#include <stdio.h>

int main() {

    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if(age > 60) {
        printf("You can drive and you are a senior citizen\n");
    }
    else if(age > 40) {
        printf("You can drive and you are a elder\n");
    }
    else if(age > 18) {
        printf("You can drive\n");
    }
    else {
        printf("You cannot drive\n");
    }

    return 0;

}