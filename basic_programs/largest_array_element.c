#include <stdio.h>

int main() {

    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int numbers[n];
    printf("Enter array elements : ");
    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &numbers[i]);
    }

    int max = numbers[0];
    for(int i = 1 ; i < n ; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Largest element is the array is %d\n", max);
    
    return 0;

}