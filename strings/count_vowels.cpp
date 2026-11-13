#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text = "Learning C++ is fun";
    int vowelCount = 0;

    for (char character : text) {
        char lower = static_cast<char>(
            tolower(static_cast<unsigned char>(character)));
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u') {
            ++vowelCount;
        }
    }

    cout << "Vowels: " << vowelCount << '\n';
}
