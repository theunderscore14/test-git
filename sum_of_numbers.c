#include <stdio.h>
void calculateSum(int x, int y) {
    int sum = x + y;
    printf("The Sum of %d and %d is: %d\n", x, y, sum);
}

int main() {
    calculateSum(5, 10);
    return 0;
}