#include <stdio.h>

int main() {

    char name[20] = "Immutable";  // cannot change this
    char *Name = "Mutable";       // can change this

    Name = "Rahul Pandey";

    printf("%s\n", Name);

    return 0;

}