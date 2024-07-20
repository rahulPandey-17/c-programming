// program to check weather user entered a lower case character or not

#include <stdio.h>

int main() {

    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);

    if(ch >= 97 && ch <= 122) {
        printf("It is a lower case character\n");
    }
    else {
        printf("It is not a lower case character\n");
    }

    return 0;

}