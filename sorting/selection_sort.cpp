#include <iostream>
using namespace std;

int main() {
    int values[] = {64, 25, 12, 22, 11};
    const int size = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < size - 1; ++i) {
        int smallest = i;
        for (int j = i + 1; j < size; ++j) {
            if (values[j] < values[smallest]) {
                smallest = j;
            }
        }
        int temporary = values[i];
        values[i] = values[smallest];
        values[smallest] = temporary;
    }

    for (int value : values) {
        cout << value << ' ';
    }
    cout << '\n';
}
