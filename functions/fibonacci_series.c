#include <stdio.h>

void fibonacci(int n) {

    int series[n];
    series[0] = 0;
    series[1] = 1;
    
    for(int i = 2 ; i < n ; i++) {
        series[i] = series[i - 1] + series[i - 2];
    }

    /* loop for printing the series */

    for(int i = 0 ; i < n ; i++) {
        printf("%d ", series[i]);
    }

    printf("\n");

}

int main() {

    int n;
    printf("Enter the number of digits you want the series upto : ");
    scanf("%d", &n);

    fibonacci(n);
    
    return 0;

}