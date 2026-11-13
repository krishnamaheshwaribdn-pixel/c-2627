#include <iostream>
using namespace std;

int main() {
    const int rows = 5;

    for (int row = 1; row <= rows; ++row) {
        for (int number = 1; number <= row; ++number) {
            cout << number << ' ';
        }
        cout << '\n';
    }
}
