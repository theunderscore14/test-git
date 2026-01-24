#include <stdio.h>
#include "calc.c"

int main() {
    printf("5 + 5 = %d\n", add(5, 5));
    printf("8 - 5 = %d\n", subtract(8, 5));
    printf("6 * 7 = %d\n", multiply(6, 7));
    printf("20 / 4 = %.2f\n", divide(20, 4));
    printf("10 / 0 = %.2f\n", divide(10, 0));
    return 0;
}