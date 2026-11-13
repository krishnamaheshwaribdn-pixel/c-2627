#include <iostream>
using namespace std;

int main() {
    const int rows = 5;

    for (int row = 1; row <= rows; ++row) {
        for (int space = 0; space < rows - row; ++space) {
            cout << ' ';
        }
        for (int star = 0; star < 2 * row - 1; ++star) {
            cout << '*';
        }
        cout << '\n';
    }
}
