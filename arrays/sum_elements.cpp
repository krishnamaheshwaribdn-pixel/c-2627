#include <iostream>
using namespace std;

int main() {
    int values[] = {3, 7, 2, 8, 5};
    const int size = sizeof(values) / sizeof(values[0]);
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += values[i];
    }

    cout << "Sum: " << sum << '\n';
}
