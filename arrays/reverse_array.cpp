#include <iostream>
using namespace std;

int main() {
    int values[] = {1, 2, 3, 4, 5};
    const int size = sizeof(values) / sizeof(values[0]);

    for (int left = 0, right = size - 1; left < right; ++left, --right) {
        int temporary = values[left];
        values[left] = values[right];
        values[right] = temporary;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << values[i] << ' ';
    }
    cout << '\n';
}
