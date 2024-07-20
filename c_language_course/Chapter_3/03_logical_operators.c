#include <stdio.h>

int main() {

    // c have three logical operators and(&&), or(||), not(!)

    printf("Logical table for AND(&&) operator\n\n");

    printf("0 && 0 = %d\n", 0 && 0);
    printf("1 && 0 = %d\n", 1 && 0);
    printf("0 && 1 = %d\n", 0 && 1);
    printf("1 && 1 = %d\n\n", 1 && 1);

    printf("Logical table for OR(||) operator\n\n");

    printf("0 || 0 = %d\n", 0 || 0);
    printf("1 || 0 = %d\n", 1 || 0);
    printf("0 || 1 = %d\n", 0 || 1);
    printf("1 || 1 = %d\n\n", 1 || 1);

    printf("Logical table for NOT(!) operator\n\n");

    printf("!1 = %d\n", !1);
    printf("!0 = %d\n", !0);

    return 0;

}