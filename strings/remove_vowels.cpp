#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Practice makes progress";
    string withoutVowels;

    for (char character : text) {
        char lower = static_cast<char>(
            tolower(static_cast<unsigned char>(character)));
        if (lower != 'a' && lower != 'e' && lower != 'i' &&
            lower != 'o' && lower != 'u') {
            withoutVowels += character;
        }
    }

    cout << withoutVowels << '\n';
}
