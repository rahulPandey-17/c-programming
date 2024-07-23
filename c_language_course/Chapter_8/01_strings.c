#include <stdio.h>

int main() {

    char name[] = "Rahul Pandey";

    for(int i = 0 ; name[i] != '\0' ; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    // alternate way of printing strings

    printf("%s\n", name);

    return 0;

}