#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "C++ is fun to learn";
    int wordCount = 0;
    bool insideWord = false;

    for (char character : text) {
        if (character != ' ' && !insideWord) {
            ++wordCount;
            insideWord = true;
        } else if (character == ' ') {
            insideWord = false;
        }
    }

    cout << "Word count: " << wordCount << '\n';
}
