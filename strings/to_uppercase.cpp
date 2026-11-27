#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Hello, C++!";

    for (char& character : text) {
        character = static_cast<char>(
            toupper(static_cast<unsigned char>(character)));
    }

    cout << text << '\n';
}
