// program to make a custom function to count the length of string

#include <stdio.h>

int strcnt(char str[50]) {

    int count = 0;

    for(int i = 0 ; str[i] != '\0' ; i++) {
        if(str[i] == '\n') {
            break;
        }
        count++;
    }

    return count;

}

int main() {

    char str[50];

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    printf("The length of the string is %d\n", strcnt(str));

    return 0;

}