#include <stdio.h>

int main() {

    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr = num;

    printf("Address stored in ptr is %p\n", ptr);

    ptr += 2;

    printf("Address of 3rd element of the array is %p\n", &num[2]);
    printf("Address stored in ptr after performing p += 2 is %p\n", ptr);

    return 0;

}