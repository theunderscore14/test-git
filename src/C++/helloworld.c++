#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i = 10; i > 0; i--) {
        cout << to_string(i) + "\n";
    }
    cout << "Liftoff!\n";
    return 0;
}