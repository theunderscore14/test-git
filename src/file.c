#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("C:\\GitHub Codes\\test-git\\src\\example.txt", "a");
    fprintf(fptr, "Welcome to Earth!\n");
    fclose(fptr);
    return 0;
}