#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string text = "banana";
    map<char, int> frequency;

    for (char character : text) {
        ++frequency[character];
    }

    for (const auto& entry : frequency) {
        cout << entry.first << ": " << entry.second << '\n';
    }
}
