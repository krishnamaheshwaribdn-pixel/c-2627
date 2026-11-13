#include <iostream>
using namespace std;

int main() {
    const int rows = 5;

    for (int row = 1; row <= rows; ++row) {
        for (int column = 1; column <= row; ++column) {
            cout << "* ";
        }
        cout << '\n';
    }
}
