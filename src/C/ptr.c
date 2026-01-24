#include <stdio.h>
int add(int x, int y) {
    return x + y;
}

int main() {
    int (*ptr)(int, int) = add;
    int result = ptr(3, 7);
    printf("Result: %d\n", result);
    return 0;
}