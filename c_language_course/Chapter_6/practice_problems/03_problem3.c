// program to change the value of a variable

#include <stdio.h>

int change_value(int* a) {
    return 10 * (*a);
}

int main() {

    int a = 20;

    printf("Changed value of a is %d\n", change_value(&a));

    return 0;

}