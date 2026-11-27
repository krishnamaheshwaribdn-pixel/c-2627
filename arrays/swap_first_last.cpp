#include <iostream>
using namespace std;

int main() {
    int values[] = {10, 20, 30, 40, 50};
    const int size = sizeof(values) / sizeof(values[0]);
    int temporary = values[0];
    values[0] = values[size - 1];
    values[size - 1] = temporary;

    cout << "After swapping first and last: ";
    for (int i = 0; i < size; ++i) {
        cout << values[i] << ' ';
    }
    cout << '\n';
}
