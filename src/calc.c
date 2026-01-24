#include "calc.h"

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

double divide(int x, int y) {
    if (y == 0) {
        return 0.0;
    } else {
        return (double)x / (double)y;
    }
}