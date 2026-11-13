#include <iostream>
using namespace std;

int main() {
    const int middleRow = 4;

    for (int row = 1; row <= middleRow; ++row) {
        for (int space = 0; space < middleRow - row; ++space) {
            cout << ' ';
        }
        for (int star = 0; star < 2 * row - 1; ++star) {
            cout << '*';
        }
        cout << '\n';
    }

    for (int row = middleRow - 1; row >= 1; --row) {
        for (int space = 0; space < middleRow - row; ++space) {
            cout << ' ';
        }
        for (int star = 0; star < 2 * row - 1; ++star) {
            cout << '*';
        }
        cout << '\n';
    }
}
