#include <iostream>
using namespace std;

int main() {
    int values[] = {4, 7, 2, 9, 6, 3};
    const int size = sizeof(values) / sizeof(values[0]);
    int oddCount = 0;

    for (int i = 0; i < size; ++i) {
        if (values[i] % 2 != 0) {
            ++oddCount;
        }
    }

    cout << "Odd numbers: " << oddCount << '\n';
}
