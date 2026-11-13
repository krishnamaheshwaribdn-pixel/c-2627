#include <iostream>
using namespace std;

int main() {
    int values[] = {1, 2, 3, 4, 5};
    const int size = sizeof(values) / sizeof(values[0]);
    int first = values[0];

    for (int i = 0; i < size - 1; ++i) {
        values[i] = values[i + 1];
    }
    values[size - 1] = first;

    cout << "Left-rotated array: ";
    for (int i = 0; i < size; ++i) {
        cout << values[i] << ' ';
    }
    cout << '\n';
}
