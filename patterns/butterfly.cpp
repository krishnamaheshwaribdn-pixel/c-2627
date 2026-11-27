#include <iostream>
using namespace std;

int main() {
    const int rows = 4;

    for (int row = 1; row <= rows; ++row) {
        for (int star = 0; star < row; ++star) {
            cout << '*';
        }
        for (int space = 0; space < 2 * (rows - row); ++space) {
            cout << ' ';
        }
        for (int star = 0; star < row; ++star) {
            cout << '*';
        }
        cout << '\n';
    }

    for (int row = rows; row >= 1; --row) {
        for (int star = 0; star < row; ++star) {
            cout << '*';
        }
        for (int space = 0; space < 2 * (rows - row); ++space) {
            cout << ' ';
        }
        for (int star = 0; star < row; ++star) {
            cout << '*';
        }
        cout << '\n';
    }
}
