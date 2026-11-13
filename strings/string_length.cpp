#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello, C++!";
    int length = 0;

    for (char character : text) {
        (void)character;
        ++length;
    }

    cout << "Length: " << length << '\n';
}
