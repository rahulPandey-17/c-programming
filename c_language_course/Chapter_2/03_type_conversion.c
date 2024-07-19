#include <stdio.h>

int main() {

    // if both the opeprands are int then the final value will also be an int

    printf("Integer division of %d and %d is %d\n", 9, 2, 9 / 2);   // 2.5 will be converted to 2 as both the operands are int

    // if one operand is float and other is int the final value will be converted to float

    printf("Division of %d and %.1f is %.1f\n", 9, 2.0, 9 / 2.0);

    // if both the operands are float the final value will be float

    printf("Division of %.1f and %.1f is %.1f\n", 9.0, 2.0, 9.0 / 2.0);

    return 0;

}