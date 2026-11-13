#include <iostream>
using namespace std;

int main() {
    int values[] = {4, 9, 12, 7, 20, 3};
    int size = sizeof(values) / sizeof(values[0]);
    int evenCount = 0;

    for (int i = 0; i < size; ++i) {
        if (values[i] % 2 == 0) {
            ++evenCount;
        }
    }

    cout << "Even numbers: " << evenCount << '\n';
}
