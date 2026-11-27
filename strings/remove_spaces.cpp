#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "C++ is easy to learn";
    string withoutSpaces;

    for (char character : text) {
        if (character != ' ') {
            withoutSpaces += character;
        }
    }

    cout << withoutSpaces << '\n';
}
