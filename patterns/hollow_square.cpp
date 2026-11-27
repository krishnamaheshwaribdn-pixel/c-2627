#include <iostream>
using namespace std;

int main() {
    const int size = 5;

    for (int row = 0; row < size; ++row) {
        for (int column = 0; column < size; ++column) {
            if (row == 0 || row == size - 1 ||
                column == 0 || column == size - 1) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << '\n';
    }
}
