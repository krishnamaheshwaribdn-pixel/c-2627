#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "banana";
    const char target = 'a';
    const char replacement = 'o';

    for (char& character : text) {
        if (character == target) {
            character = replacement;
        }
    }

    cout << text << '\n';
}
