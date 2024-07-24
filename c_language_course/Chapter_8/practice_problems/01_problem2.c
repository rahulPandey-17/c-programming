#include <stdio.h>
#include <string.h>

int main() {

    char name[20];
    char Name[20];

    // taking input using %c

    printf("Enter the first string : ");
    for(int i = 0 ; i < 20 ; i++) {
        scanf("%c", &name[i]);
        if(name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    // taking input using %s

    printf("Enter the second string : ");
    scanf("%s", Name);

    // checking if the strings are equal

    if(strcmp(name, Name) == 0) {
        printf("Both strings are equal\n");
    }
    else {
        printf("Both strings are not equal\n");
    }

    return 0;

}