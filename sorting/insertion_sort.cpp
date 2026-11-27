git commit -m "Add array example" -- array.cpp
git commit -m "Add index example" -- index.cpp
git commit -m "Add largest element example" -- largestelement.cpp
git commit -m "Add reverse example" -- reverse.cpp#include <iostream>
using namespace std;

int main() {
    int values[] = {9, 5, 1, 4, 3};
    const int size = sizeof(values) / sizeof(values[0]);

    for (int i = 1; i < size; ++i) {
        int current = values[i];
        int position = i - 1;

        while (position >= 0 && values[position] > current) {
            values[position + 1] = values[position];
            --position;
        }
        values[position + 1] = current;
    }

    for (int value : values) {
        cout << value << ' ';
    }
    cout << '\n';
}
