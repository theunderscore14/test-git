#include <stdio.h>
struct Car {
    char brand[30];
    char model[30];
    int year;
};

int main() {
    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Audi", "A6", 2020};
    struct Car car3 = {"Ford", "Mustang", 1969};
    struct Car car4 = {"Toyota", "Corolla", 2011};

    printf("%s %s %d\n", car1.brand, car1.model, car1.year);
    printf("%s %s %d\n", car2.brand, car2.model, car2.year);
    printf("%s %s %d\n", car3.brand, car3.model, car3.year);
    printf("%s %s %d\n", car4.brand, car4.model, car4.year);
    return 0;
}