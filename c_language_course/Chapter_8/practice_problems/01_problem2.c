#include <stdio.h>
#include <string.h>

int main() {

    char s1[20];
    char s2[20];
    int i;

    // taking input using for loop and %c

    printf("Enter the first string : ");
    for(i = 0 ; i < 20 ; i++) {
        scanf("%c", &s1[i]);
        if(s1[i] == '\n') {
            break;
        }
    }
    s1[i] = '\0';

    // taking input using %s

    printf("Enter the second string : ");
    scanf("%s", s2);

    if(strcmp(s1, s2) == 0) {
        printf("Both strings are equal\n");
    }
    else {
        printf("Both strings are not equal\n");
    }

    return 0;

}