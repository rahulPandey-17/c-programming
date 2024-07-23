#include <stdio.h>

void reverse_array(int arr[]) {

    for(int i = 4 ; i >= 0 ; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

int main() {

    int arr[5];

    printf("Enter the array elements : ");
    for(int i = 0 ; i < 5 ; i++) {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr);

    return 0;

}