#include <iostream>
using namespace std;

int main() {
    const int size = 6;

    for (int row = 0; row < size; ++row) {
        for (int column = 0; column < size; ++column) {
            cout << ((row + column) % 2 == 0 ? '*' : ' ');
        }
        cout << '\n';
    }
}
