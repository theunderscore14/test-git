#include <stdio.h>
void calculateSum(int x, int y) {
    int sum = x + y;
    printf("The Sum of %d and %d is: %d\n", x, y, sum);
}

int main() {
    int x, y;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &x, &y);
    calculateSum(x, y);
    calculateSum(x, y);
    return 0;
}