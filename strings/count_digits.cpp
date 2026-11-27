#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "Room 204 has 3 windows";
    int digitCount = 0;

    for (char character : text) {
        if (isdigit(static_cast<unsigned char>(character))) {
            ++digitCount;
        }
    }

    cout << "Digits: " << digitCount << '\n';
}
