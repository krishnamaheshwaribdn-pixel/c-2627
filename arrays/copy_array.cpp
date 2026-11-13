#include <iostream>
using namespace std;

int main() {
    int original[] = {3, 6, 9, 12, 15};
    const int size = sizeof(original) / sizeof(original[0]);
    int copy[size];

    for (int i = 0; i < size; ++i) {
        copy[i] = original[i];
    }

    cout << "Copied array: ";
    for (int i = 0; i < size; ++i) {
        cout << copy[i] << ' ';
    }
    cout << '\n';
}
