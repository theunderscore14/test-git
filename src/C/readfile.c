#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("C:\\GitHub Codes\\test-git\\src\\example.txt", "r");
    if (fptr == NULL) {
        printf("Error Opening File\n");
    }
    char ch[100];

    while(fgets(ch, 100, fptr)) {
        printf("%s", ch);
    }

    // fgets(ch, 100, fptr);
    // printf("%s", ch);
    fclose(fptr);
    return 0;
}