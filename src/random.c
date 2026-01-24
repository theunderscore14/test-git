#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int r = rand() % 10;
    printf("%d\n", r);
    return 0;
}