#include <stdio.h>
#include <stdbool.h>

bool eo(int num) {
    return (num % 2 == 0);
}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(eo(num)) {
        printf("%d is even\n", num);
    }
    else {
        printf("%d is odd\n", num);
    }
    
    return 0;

}