#include <stdio.h>

int main() {

    // in c any non-zero value is considered true, and 0 is considered as false

    if(12) {
        printf("This if will execute\n");
    }

    // in c a negative value also evaluates to true

    if(-1) {
        printf("Will it execute?\n");
    }

    if(0) {
        printf("This if will not execute\n");
    }

    return 0;

}