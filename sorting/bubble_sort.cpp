#include <iostream>
using namespace std;

int main() {
    int values[] = {5, 1, 4, 2, 8};
    const int size = sizeof(values) / sizeof(values[0]);

    for (int end = size - 1; end > 0; --end) {
        for (int i = 0; i < end; ++i) {
            if (values[i] > values[i + 1]) {
                int temporary = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temporary;
            }
        }
    }

    for (int value : values) {
        cout << value << ' ';
    }
    cout << '\n';
}
